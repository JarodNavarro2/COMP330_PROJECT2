/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QAction>
#include <QApplication>
#include <QClipboard>
#include <QColorDialog>
#include <QComboBox>
#include <QFontComboBox>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QFontDatabase>
#include <QMenu>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMenuBar>
#include <QTextCodec>
#include <QTextEdit>
#include <QStatusBar>
#include <QToolBar>
#include <QTextCursor>
#include <QTextDocumentWriter>
#include <QTextList>
#include <QtDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <QMimeData>
#include <QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QToolTip>
#include "menudialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(222, 241, 255);");

    connect(ui->textEdit, &QTextEdit::currentCharFormatChanged,
            this, &MainWindow::currentCharFormatChanged);
    connect(ui->textEdit, &QTextEdit::cursorPositionChanged,
            this, &MainWindow::cursorPositionChanged);
    connect(ui->textEdit->document(), &QTextDocument::modificationChanged,
            ui->actionSave, &QAction::setEnabled);
    connect(ui->textEdit->document(), &QTextDocument::modificationChanged,
            this, &QWidget::setWindowModified);
    connect(ui->textEdit->document(), &QTextDocument::undoAvailable,
            ui->actionUndo, &QAction::setEnabled);
    connect(ui->textEdit->document(), &QTextDocument::redoAvailable,
            ui->actionRedo, &QAction::setEnabled);

    QFont textFont("Helvetica");
    textFont.setStyleHint(QFont::SansSerif);
    ui->textEdit->setFont(textFont);
    fontChanged(ui->textEdit->font());
    colorChanged(ui->textEdit->textColor());
    alignmentChanged(ui->textEdit->alignment());

    setWindowModified(ui->textEdit->document()->isModified());
    ui->actionSave->setEnabled(ui->textEdit->document()->isModified());
    ui->actionUndo->setEnabled(ui->textEdit->document()->isUndoAvailable());
    ui->actionRedo->setEnabled(ui->textEdit->document()->isRedoAvailable());
    setComboBoxs();
    QPixmap pix(16,16);
    pix.fill(Qt::black);
    ui->actionColor->setIcon(pix);

    playlist = new QMediaPlaylist;
    playlist->addMedia(QUrl("qrc:/Music/music/Safe&Sound.mp3"));
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::closeEvent(QCloseEvent *e)
{
    if (maybeSave())
        e->accept();
    else
        e->ignore();
}
void MainWindow::on_actionNew_triggered()
{
    fileNew();
}

void MainWindow::on_actionOpen_triggered()
{
    fileOpen();
}

void MainWindow::on_actionSave_triggered()
{
    fileSave();
}

void MainWindow::on_actionSave_as_triggered()
{
    fileSaveAs();
}

void MainWindow::on_actionPrint_triggered()
{
    filePrint();
}

void MainWindow::on_actionPrint_Preview_triggered()
{
    filePrintPreview();
}

void MainWindow::on_actionPDF_triggered()
{
    filePrintPdf();
}

void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_actionUndo_triggered()
{
   ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionPlay_triggered()
{
    player = new QMediaPlayer;
    player->setPlaylist(playlist);
    player->setVolume(100);
    player->play();
    is_playing = true;
}

void MainWindow::on_actionResume_triggered()
{
    if (is_playing == true)
    {
        player->play();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Media not playing");
    }
}

void MainWindow::on_actionMenu_triggered()
{
    MenuDialog *menu = new MenuDialog;
    menu->show();
}

void MainWindow::on_actionStop_triggered()
{
    if (is_playing == true)
    {
        player->stop();
        is_playing=false;
    }
    else
    {
        QMessageBox::warning(this, "Error", "Media not playing");
    }

}

void MainWindow::on_actionPause_triggered()
{
    if (is_playing == true)
    {
        player->pause();
    }
    else
    {
        QMessageBox::warning(this, "Error", "Media not playing");
    }
}
void MainWindow::setComboBoxs()
{
    ui->comboStyle->addItem("Standard");
    ui->comboStyle->addItem("Bullet List (Disc)");
    ui->comboStyle->addItem("Bullet List (Circle)");
    ui->comboStyle->addItem("Bullet List (Square)");
    ui->comboStyle->addItem("Ordered List (Decimal)");
    ui->comboStyle->addItem("Ordered List (Alpha lower)");
    ui->comboStyle->addItem("Ordered List (Alpha upper)");
    ui->comboStyle->addItem("Ordered List (Roman lower)");
    ui->comboStyle->addItem("Ordered List (Roman upper)");
    typedef void (QComboBox::*QComboIntSignal)(int);
    connect(ui->comboStyle, static_cast<QComboIntSignal>(&QComboBox::activated), this, &MainWindow::textStyle);
    typedef void (QComboBox::*QComboStringSignal)(const QString &);
    connect(ui->comboFont, static_cast<QComboStringSignal>(&QComboBox::activated), this, &MainWindow::textFamily);

    const QList<int> standardSizes = QFontDatabase::standardSizes();
    foreach (int size, standardSizes)
        ui->comboSize->addItem(QString::number(size));
    ui->comboSize->setCurrentIndex(standardSizes.indexOf(QApplication::font().pointSize()));

    connect(ui->comboSize, static_cast<QComboStringSignal>(&QComboBox::activated), this, &MainWindow::textSize);
}
bool MainWindow::load(const QString &f)
{
    if (!QFile::exists(f))
        return false;
    QFile file(f);
    if (!file.open(QFile::ReadOnly))
        return false;

    QByteArray data = file.readAll();
    QTextCodec *codec = Qt::codecForHtml(data);
    QString str = codec->toUnicode(data);
    if (Qt::mightBeRichText(str)) {
        ui->textEdit->setHtml(str);
    } else {
        str = QString::fromLocal8Bit(data);
        ui->textEdit->setPlainText(str);
    }

    setCurrentFileName(f);
    return true;
}

bool MainWindow::maybeSave()
{
    if (!ui->textEdit->document()->isModified())
        return true;

    const QMessageBox::StandardButton ret =
        QMessageBox::warning(this, QCoreApplication::applicationName(),
                             tr("The document has been modified.\n"
                                "Do you want to save your changes?"),
                             QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    if (ret == QMessageBox::Save)
        return fileSave();
    else if (ret == QMessageBox::Cancel)
        return false;
    return true;
}

void MainWindow::setCurrentFileName(const QString &fileName)
{
    this->fileName = fileName;
    ui->textEdit->document()->setModified(false);

    QString shownName;
    if (fileName.isEmpty())
        shownName = "untitled.txt";
    else
        shownName = QFileInfo(fileName).fileName();

    setWindowTitle(tr("%1[*] - %2").arg(shownName, QCoreApplication::applicationName()));
    setWindowModified(false);
}

void MainWindow::fileNew()
{
    if (maybeSave()) {
        ui->textEdit->clear();
        setCurrentFileName(QString());
    }
}

void MainWindow::fileOpen()
{
    QFileDialog fileDialog(this, tr("Open File..."));
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.setMimeTypeFilters(QStringList() << "text/html" << "text/plain");
    if (fileDialog.exec() != QDialog::Accepted)
        return;
    const QString fn = fileDialog.selectedFiles().first();
    if (load(fn))
        statusBar()->showMessage(tr("Opened \"%1\"").arg(QDir::toNativeSeparators(fn)));
    else
        statusBar()->showMessage(tr("Could not open \"%1\"").arg(QDir::toNativeSeparators(fn)));
}

bool MainWindow::fileSave()
{
    if (fileName.isEmpty())
        return fileSaveAs();
    if (fileName.startsWith(QStringLiteral(":/")))
        return fileSaveAs();

    QTextDocumentWriter writer(fileName);
    bool success = writer.write(ui->textEdit->document());
    if (success) {
        ui->textEdit->document()->setModified(false);
        statusBar()->showMessage(tr("Wrote \"%1\"").arg(QDir::toNativeSeparators(fileName)));
    } else {
        statusBar()->showMessage(tr("Could not write to file \"%1\"")
                                 .arg(QDir::toNativeSeparators(fileName)));
    }
    return success;
}

bool MainWindow::fileSaveAs()
{
    QFileDialog fileDialog(this, tr("Save as..."));
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    QStringList mimeTypes;
    mimeTypes << "application/vnd.oasis.opendocument.text" << "text/html" << "text/plain";
    fileDialog.setMimeTypeFilters(mimeTypes);
    fileDialog.setDefaultSuffix("odt");
    if (fileDialog.exec() != QDialog::Accepted)
        return false;
    const QString fn = fileDialog.selectedFiles().first();
    setCurrentFileName(fn);
    return fileSave();
}

void MainWindow::filePrint()
{
#if !defined(QT_NO_PRINTER) && !defined(QT_NO_PRINTDIALOG)
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog *dlg = new QPrintDialog(&printer, this);
    if (ui->textEdit->textCursor().hasSelection())
        dlg->addEnabledOption(QAbstractPrintDialog::PrintSelection);
    dlg->setWindowTitle(tr("Print Document"));
    if (dlg->exec() == QDialog::Accepted)
        ui->textEdit->print(&printer);
    delete dlg;
#endif
}

void MainWindow::filePrintPreview()
{
#if !defined(QT_NO_PRINTER) && !defined(QT_NO_PRINTDIALOG)
    QPrinter printer(QPrinter::HighResolution);
    QPrintPreviewDialog preview(&printer, this);
    connect(&preview, &QPrintPreviewDialog::paintRequested, this, &MainWindow::printPreview);
    preview.exec();
#endif
}

void MainWindow::printPreview(QPrinter *printer)
{
#ifdef QT_NO_PRINTER
    Q_UNUSED(printer);
#else
    ui->textEdit->print(printer);
#endif
}


void MainWindow::filePrintPdf()
{
#ifndef QT_NO_PRINTER
//! [0]
    QFileDialog fileDialog(this, tr("Export PDF"));
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setMimeTypeFilters(QStringList("application/pdf"));
    fileDialog.setDefaultSuffix("pdf");
    if (fileDialog.exec() != QDialog::Accepted)
        return;
    QString fileName = fileDialog.selectedFiles().first();
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    ui->textEdit->document()->print(&printer);
    statusBar()->showMessage(tr("Exported \"%1\"")
                             .arg(QDir::toNativeSeparators(fileName)));
//! [0]
#endif
}

void MainWindow::textBold()
{
    QTextCharFormat fmt;
    fmt.setFontWeight(ui->actionBold->isChecked() ? QFont::Bold : QFont::Normal);
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::textUnderline()
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(ui->actionUnderline->isChecked());
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::textItalic()
{
    QTextCharFormat fmt;
    fmt.setFontItalic(ui->actionItalic->isChecked());
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::textFamily(const QString &f)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(f);
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::textSize(const QString &p)
{
    qreal pointSize = p.toFloat();
    if (p.toFloat() > 0) {
        QTextCharFormat fmt;
        fmt.setFontPointSize(pointSize);
        mergeFormatOnWordOrSelection(fmt);
    }
}

void MainWindow::textStyle(int styleIndex)
{
    QTextCursor cursor = ui->textEdit->textCursor();

    if (styleIndex != 0) {
        QTextListFormat::Style style = QTextListFormat::ListDisc;

        switch (styleIndex) {
            default:
            case 1:
                style = QTextListFormat::ListDisc;
                break;
            case 2:
                style = QTextListFormat::ListCircle;
                break;
            case 3:
                style = QTextListFormat::ListSquare;
                break;
            case 4:
                style = QTextListFormat::ListDecimal;
                break;
            case 5:
                style = QTextListFormat::ListLowerAlpha;
                break;
            case 6:
                style = QTextListFormat::ListUpperAlpha;
                break;
            case 7:
                style = QTextListFormat::ListLowerRoman;
                break;
            case 8:
                style = QTextListFormat::ListUpperRoman;
                break;
        }

        cursor.beginEditBlock();

        QTextBlockFormat blockFmt = cursor.blockFormat();

        QTextListFormat listFmt;

        if (cursor.currentList()) {
            listFmt = cursor.currentList()->format();
        } else {
            listFmt.setIndent(blockFmt.indent() + 1);
            blockFmt.setIndent(0);
            cursor.setBlockFormat(blockFmt);
        }

        listFmt.setStyle(style);

        cursor.createList(listFmt);

        cursor.endEditBlock();
    } else {
        // ####
        QTextBlockFormat bfmt;
        bfmt.setObjectIndex(-1);
        cursor.mergeBlockFormat(bfmt);
    }
}

void MainWindow::textColor()
{
    QColor col = QColorDialog::getColor(ui->textEdit->textColor(), this);
    if (!col.isValid())
        return;
    QTextCharFormat fmt;
    fmt.setForeground(col);
    mergeFormatOnWordOrSelection(fmt);
    colorChanged(col);
}

void MainWindow::textAlign(QAction *a)
{
    if (a == ui->actionPos_Left)
        ui->textEdit->setAlignment(Qt::AlignLeft | Qt::AlignAbsolute);
    else if (a == ui->actionPos_Center)
        ui->textEdit->setAlignment(Qt::AlignHCenter);
    else if (a == ui->actionPos_Right)
        ui->textEdit->setAlignment(Qt::AlignRight | Qt::AlignAbsolute);
    else if (a == ui->actionJustify)
        ui->textEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow::currentCharFormatChanged(const QTextCharFormat &format)
{
    fontChanged(format.font());
    colorChanged(format.foreground().color());
}

void MainWindow::cursorPositionChanged()
{
    alignmentChanged(ui->textEdit->alignment());
}

void MainWindow::clipboardDataChanged()
{
#ifndef QT_NO_CLIPBOARD
    if (const QMimeData *md = QApplication::clipboard()->mimeData())
        ui->actionPaste->setEnabled(md->hasText());
#endif
}
void MainWindow::mergeFormatOnWordOrSelection(const QTextCharFormat &format)
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (!cursor.hasSelection())
        cursor.select(QTextCursor::WordUnderCursor);
    cursor.mergeCharFormat(format);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::fontChanged(const QFont &f)
{
    ui->comboFont->setCurrentIndex(ui->comboFont->findText(QFontInfo(f).family()));
    ui->comboSize->setCurrentIndex(ui->comboSize->findText(QString::number(f.pointSize())));
    ui->actionBold->setChecked(f.bold());
    ui->actionItalic->setChecked(f.italic());
    ui->actionUnderline->setChecked(f.underline());
}

void MainWindow::colorChanged(const QColor &c)
{
    QPixmap pix(16, 16);
    pix.fill(c);
    ui->actionColor->setIcon(pix);
}

void MainWindow::alignmentChanged(Qt::Alignment a)
{
    if (a & Qt::AlignLeft)
        ui->actionPos_Left->setChecked(true);
    else if (a & Qt::AlignHCenter)
        ui->actionPos_Center->setChecked(true);
    else if (a & Qt::AlignRight)
        ui->actionPos_Right->setChecked(true);
    else if (a & Qt::AlignJustify)
        ui->actionJustify->setChecked(true);
}

void MainWindow::on_actionBold_triggered()
{
    //TODO: Fix glitch
    textBold();
    QFont bold;
    bold.setBold(true);
    ui->actionBold->setFont(bold);
    ui->actionBold->setCheckable(true);
}

void MainWindow::on_actionItalic_triggered()
{
    //TODO: Fix glitch
    textItalic();
    QFont italic;
    italic.setItalic(true);
    ui->actionItalic->setFont(italic);
    ui->actionItalic->setCheckable(true);
}

void MainWindow::on_actionUnderline_triggered()
{
    //TODO: Fix glitch
    textUnderline();
    QFont underline;
    underline.setUnderline(true);
    ui->actionUnderline->setFont(underline);
    ui->actionUnderline->setCheckable(true);
}

void MainWindow::on_actionPos_Left_triggered()
{
    textAlign(ui->actionPos_Left);
}

void MainWindow::on_actionPos_Right_triggered()
{
    textAlign(ui->actionPos_Right);
}

void MainWindow::on_actionPos_Center_triggered()
{
    textAlign(ui->actionPos_Center);
}

void MainWindow::on_actionJustify_triggered()
{
    textAlign(ui->actionJustify);
}

void MainWindow::on_actionColor_triggered()
{
    //TODO: Implement color scheme
    textColor();
}
