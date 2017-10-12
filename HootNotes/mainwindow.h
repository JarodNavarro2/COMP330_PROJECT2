#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
class QAction;
class QComboBox;
class QFontComboBox;
class QTextEdit;
class QTextCharFormat;
class QMenu;
class QPrinter;
QT_END_NAMESPACE
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool load(const QString &f);
    ~MainWindow();
public slots:
     void fileNew();
protected:
     void closeEvent(QCloseEvent *e) override;
private slots:
    void setComboBoxs();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionPrint_Preview_triggered();

    void on_actionPDF_triggered();

    void on_actionQuit_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionPlay_triggered();

    void on_actionMenu_triggered();
    void fileOpen();
    bool fileSave();
    bool fileSaveAs();
    void filePrint();
    void filePrintPreview();
    void filePrintPdf();

    void textBold();
    void textUnderline();
    void textItalic();
    void textFamily(const QString &f);
    void textSize(const QString &p);
    void textStyle(int styleIndex);
    void textColor();
    void textAlign(QAction *a);

    void currentCharFormatChanged(const QTextCharFormat &format);
    void cursorPositionChanged();

    void clipboardDataChanged();
    void printPreview(QPrinter *);
    void on_actionBold_triggered();

    void on_actionItalic_triggered();

    void on_actionUnderline_triggered();

    void on_actionPos_Left_triggered();

    void on_actionPos_Right_triggered();

    void on_actionPos_Center_triggered();

    void on_actionJustify_triggered();

    void on_actionColor_triggered();

    void on_buttonAt_clicked();

    void on_buttonPound_clicked();

    void on_buttonArrow_clicked();

    void on_buttonEx_clicked();

    void on_buttonURL_clicked();

private:
    Ui::MainWindow *ui;
    bool maybeSave();
    void setCurrentFileName(const QString &fileName);

    void mergeFormatOnWordOrSelection(const QTextCharFormat &format);
    void fontChanged(const QFont &f);
    void colorChanged(const QColor &c);
    void alignmentChanged(Qt::Alignment a);
#ifndef QT_NO_CLIPBOARD

#endif  
    QString fileName;

};

#endif // MAINWINDOW_H
