/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionPrint_Preview;
    QAction *actionPDF;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionPlay;
    QAction *actionMenu;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionPos_Left;
    QAction *actionPos_Right;
    QAction *actionPos_Center;
    QAction *actionJustify;
    QAction *actionColor;
    QAction *actionStop;
    QAction *actionPause;
    QAction *actionResume;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboStyle;
    QFontComboBox *comboFont;
    QComboBox *comboSize;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuStressed;
    QMenu *menuHelp;
    QMenu *menuTools;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 438);
        QPalette palette;
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/images/HootIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QLatin1String("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));\n"
"background-image:url(:/Images/images/win/background.jpg);\n"
"<ui version=\"4.0\">\n"
" <class>MainWindow</class>\n"
" <widget class=\"QMainWindow\" name=\"MainWindow\">\n"
"  <property name=\"geometry\">\n"
"   <rect>\n"
"    <x>0</x>\n"
"    <y>0</y>\n"
"    <width>542</width>\n"
"    <height>348</height>\n"
"   </rect>\n"
"  </property>\n"
"  <property name=\"windowTitle\">\n"
"   <string>MainWindow</string>\n"
"  </property>\n"
"  <widget class=\"QWidget\" name=\"centralWidget\">\n"
"   <layout class=\"QHBoxLayout\" name=\"horizontalLayout\">\n"
"    <item>\n"
"     <layout"
                        " class=\"QVBoxLayout\" name=\"verticalLayout\">\n"
"      <item>\n"
"       <widget class=\"QPushButton\" name=\"buttonAt\">\n"
"        <property name=\"text\">\n"
"         <string>@</string>\n"
"        </property>\n"
"       </widget>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_12\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_8\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </space"
                        "r>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_4\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <widget class=\"QPushButton\" name=\"buttonPound\">\n"
"        <property name=\"text\">\n"
"         <string>#</string>\n"
"        </property>\n"
"       </widget>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_11\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
""
                        "      <item>\n"
"       <spacer name=\"verticalSpacer_7\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_3\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <widget class=\"QPushButton\" name=\"buttonArrow\">\n"
"        <property name=\"text\">\n"
"         <string>^</string>\n"
"        </property>\n"
"       </widget>\n"
"      </item>\n"
"      <item>\n"
"       <"
                        "spacer name=\"verticalSpacer_10\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_6\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_2\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>"
                        "20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <widget class=\"QPushButton\" name=\"buttonEx\">\n"
"        <property name=\"text\">\n"
"         <string>!</string>\n"
"        </property>\n"
"       </widget>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_9\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer_5\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <he"
                        "ight>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <spacer name=\"verticalSpacer\">\n"
"        <property name=\"orientation\">\n"
"         <enum>Qt::Vertical</enum>\n"
"        </property>\n"
"        <property name=\"sizeHint\" stdset=\"0\">\n"
"         <size>\n"
"          <width>20</width>\n"
"          <height>40</height>\n"
"         </size>\n"
"        </property>\n"
"       </spacer>\n"
"      </item>\n"
"      <item>\n"
"       <widget class=\"QPushButton\" name=\"buttonURL\">\n"
"        <property name=\"text\">\n"
"         <string>URL</string>\n"
"        </property>\n"
"       </widget>\n"
"      </item>\n"
"     </layout>\n"
"    </item>\n"
"    <item>\n"
"     <widget class=\"QTextEdit\" name=\"textEdit\"/>\n"
"    </item>\n"
"   </layout>\n"
"  </widget>\n"
"  <widget class=\"QMenuBar\" name=\"menuBar\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>0</x>\n"
"     <y>0</y>\n"
"     <width>542</width"
                        ">\n"
"     <height>20</height>\n"
"    </rect>\n"
"   </property>\n"
"   <widget class=\"QMenu\" name=\"menuFile\">\n"
"    <property name=\"title\">\n"
"     <string>File</string>\n"
"    </property>\n"
"    <addaction name=\"actionNew\"/>\n"
"    <addaction name=\"actionOpen\"/>\n"
"    <addaction name=\"separator\"/>\n"
"    <addaction name=\"actionSave\"/>\n"
"    <addaction name=\"actionSave_as\"/>\n"
"    <addaction name=\"separator\"/>\n"
"    <addaction name=\"actionPrint\"/>\n"
"    <addaction name=\"actionPrint_Preview\"/>\n"
"    <addaction name=\"actionPDF\"/>\n"
"    <addaction name=\"separator\"/>\n"
"    <addaction name=\"actionQuit\"/>\n"
"   </widget>\n"
"   <widget class=\"QMenu\" name=\"menuEdit\">\n"
"    <property name=\"title\">\n"
"     <string>Edit</string>\n"
"    </property>\n"
"    <addaction name=\"actionUndo\"/>\n"
"    <addaction name=\"actionRedo\"/>\n"
"    <addaction name=\"separator\"/>\n"
"    <addaction name=\"actionCut\"/>\n"
"    <addaction name=\"actionCopy\"/>\n"
"    <a"
                        "ddaction name=\"actionPaste\"/>\n"
"   </widget>\n"
"   <widget class=\"QMenu\" name=\"menuStressed\">\n"
"    <property name=\"title\">\n"
"     <string>Stressed...</string>\n"
"    </property>\n"
"    <addaction name=\"actionPlay\"/>\n"
"   </widget>\n"
"   <widget class=\"QMenu\" name=\"menuHelp\">\n"
"    <property name=\"title\">\n"
"     <string>Help</string>\n"
"    </property>\n"
"    <addaction name=\"actionMenu\"/>\n"
"   </widget>\n"
"   <widget class=\"QMenu\" name=\"menuTools\">\n"
"    <property name=\"title\">\n"
"     <string>Tools</string>\n"
"    </property>\n"
"    <addaction name=\"actionBold\"/>\n"
"    <addaction name=\"actionItalic\"/>\n"
"    <addaction name=\"actionUnderline\"/>\n"
"    <addaction name=\"separator\"/>\n"
"    <addaction name=\"actionPos_Left\"/>\n"
"    <addaction name=\"actionPos_Right\"/>\n"
"    <addaction name=\"actionPos_Center\"/>\n"
"    <addaction name=\"actionJustify\"/>\n"
"    <addaction name=\"actionColor\"/>\n"
"   </widget>\n"
"   <addaction name=\"menuFi"
                        "le\"/>\n"
"   <addaction name=\"menuEdit\"/>\n"
"   <addaction name=\"menuTools\"/>\n"
"   <addaction name=\"menuStressed\"/>\n"
"   <addaction name=\"menuHelp\"/>\n"
"  </widget>\n"
"  <widget class=\"QToolBar\" name=\"mainToolBar\">\n"
"   <attribute name=\"toolBarArea\">\n"
"    <enum>TopToolBarArea</enum>\n"
"   </attribute>\n"
"   <attribute name=\"toolBarBreak\">\n"
"    <bool>false</bool>\n"
"   </attribute>\n"
"  </widget>\n"
"  <widget class=\"QStatusBar\" name=\"statusBar\"/>\n"
"  <action name=\"actionNew\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/filenew.png</normaloff>:/Images/images/win/filenew.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>New</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+N</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionOpen\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
""
                        "     <normaloff>:/Images/images/win/fileopen.png</normaloff>:/Images/images/win/fileopen.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Open</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+O</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionSave\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/filesave.png</normaloff>:/Images/images/win/filesave.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Save </string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+S</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionSave_as\">\n"
"   <property name=\"text\">\n"
"    <string>Save as... </string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+Shift+S</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPrint\">\n"
"   <property name=\"i"
                        "con\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/fileprint.png</normaloff>:/Images/images/win/fileprint.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Print </string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+P</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPrint_Preview\">\n"
"   <property name=\"text\">\n"
"    <string>Print Preview</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPDF\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/exportpdf.png</normaloff>:/Images/images/win/exportpdf.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>PDF</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+Shift+P</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionQuit\">\n"
"   <property name=\"text\">\n"
"    <strin"
                        "g>Quit </string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+Q</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionUndo\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/editundo.png</normaloff>:/Images/images/win/editundo.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Undo</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+Z</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionRedo\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/editredo.png</normaloff>:/Images/images/win/editredo.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Redo</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+Y</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionCopy\">\n"
"   "
                        "<property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/editcopy.png</normaloff>:/Images/images/win/editcopy.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Copy</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+C</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPaste\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/editpaste.png</normaloff>:/Images/images/win/editpaste.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Paste</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+V</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionCut\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/editcut.png</normaloff>:/Images/images/win/editcut.png</iconset>\n"
""
                        "   </property>\n"
"   <property name=\"text\">\n"
"    <string>Cut</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+X</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPlay\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/mona.png</normaloff>:/Images/images/win/mona.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Play</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionMenu\">\n"
"   <property name=\"text\">\n"
"    <string>Menu</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionBold\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textbold.png</normaloff>:/Images/images/win/textbold.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Bold</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <stri"
                        "ng>Ctrl+B</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionItalic\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textitalic.png</normaloff>:/Images/images/win/textitalic.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Italic</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+I</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionUnderline\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textunder.png</normaloff>:/Images/images/win/textunder.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Underline</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+U</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPos_Left\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resource"
                        "s.qrc\">\n"
"     <normaloff>:/Images/images/win/textleft.png</normaloff>:/Images/images/win/textleft.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Pos Left</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+L</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPos_Right\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textright.png</normaloff>:/Images/images/win/textright.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Pos Right</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+R</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionPos_Center\">\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textcenter.png</normaloff>:/Images/images/win/textcenter.png</iconset>\n"
"   </property>\n"
"   <property nam"
                        "e=\"text\">\n"
"    <string>Pos Center</string>\n"
"   </property>\n"
"   <property name=\"shortcut\">\n"
"    <string>Ctrl+E</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"action\n"
"   <property name=\"icon\">\n"
"    <iconset resource=\"resources.qrc\">\n"
"     <normaloff>:/Images/images/win/textjustify.png</normaloff>:/Images/images/win/textjustify.png</iconset>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>Justify</string>\n"
"   </property>\n"
"  </action>\n"
"  <action name=\"actionColor\">\n"
"   <property name=\"text\">\n"
"    <string>Color</string>\n"
"   </property>\n"
"  </action>\n"
" </widget>\n"
" <layoutdefault spacing=\"6\" margin=\"11\"/>\n"
" <resources>\n"
"  <include location=\"resources.qrc\"/>\n"
" </resources>\n"
" <connections/>\n"
"</ui>"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/images/win/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/images/win/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/images/win/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/images/win/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionPrint_Preview = new QAction(MainWindow);
        actionPrint_Preview->setObjectName(QStringLiteral("actionPrint_Preview"));
        actionPDF = new QAction(MainWindow);
        actionPDF->setObjectName(QStringLiteral("actionPDF"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/images/win/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPDF->setIcon(icon5);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/images/win/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/images/win/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/images/win/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon8);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Images/images/win/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/images/win/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon10);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/images/win/mona.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon11);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Images/images/win/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon12);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QStringLiteral("actionItalic"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Images/images/win/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon13);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Images/images/win/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionPos_Left = new QAction(MainWindow);
        actionPos_Left->setObjectName(QStringLiteral("actionPos_Left"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Images/images/win/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Left->setIcon(icon15);
        actionPos_Right = new QAction(MainWindow);
        actionPos_Right->setObjectName(QStringLiteral("actionPos_Right"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Images/images/win/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Right->setIcon(icon16);
        actionPos_Center = new QAction(MainWindow);
        actionPos_Center->setObjectName(QStringLiteral("actionPos_Center"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Images/images/win/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Center->setIcon(icon17);
        actionJustify = new QAction(MainWindow);
        actionJustify->setObjectName(QStringLiteral("actionJustify"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/Images/images/win/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon18);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionResume = new QAction(MainWindow);
        actionResume->setObjectName(QStringLiteral("actionResume"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboStyle = new QComboBox(centralWidget);
        comboStyle->setObjectName(QStringLiteral("comboStyle"));
        comboStyle->setCursor(QCursor(Qt::PointingHandCursor));
        comboStyle->setAutoFillBackground(false);
        comboStyle->setStyleSheet(QLatin1String("background-color: rgb(222, 241, 255);\n"
"color:(rgb(0, 0, 0));\n"
"font: 8pt \"Century Gothic\";"));

        horizontalLayout->addWidget(comboStyle);

        comboFont = new QFontComboBox(centralWidget);
        comboFont->setObjectName(QStringLiteral("comboFont"));
        comboFont->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(comboFont);

        comboSize = new QComboBox(centralWidget);
        comboSize->setObjectName(QStringLiteral("comboSize"));
        comboSize->setCursor(QCursor(Qt::PointingHandCursor));
        comboSize->setAutoFillBackground(false);
        comboSize->setStyleSheet(QLatin1String("background-color: rgb(222, 241, 255);\n"
"color:(rgb(0, 0, 0));\n"
"font: 8pt \"Century Gothic\";"));

        horizontalLayout->addWidget(comboSize);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setAutoFillBackground(true);
        textEdit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 22));
        menuBar->setStyleSheet(QLatin1String("font: 9pt \"Century Gothic\";\n"
"background-color: rgb(222, 241, 255);\n"
"color: rgb(0, 0, 0);"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setCursor(QCursor(Qt::PointingHandCursor));
        menuFile->setAutoFillBackground(false);
        menuFile->setStyleSheet(QLatin1String("selection-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuEdit->setCursor(QCursor(Qt::PointingHandCursor));
        menuEdit->setAutoFillBackground(false);
        menuEdit->setStyleSheet(QLatin1String("selection-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuStressed = new QMenu(menuBar);
        menuStressed->setObjectName(QStringLiteral("menuStressed"));
        menuStressed->setCursor(QCursor(Qt::PointingHandCursor));
        menuStressed->setAutoFillBackground(false);
        menuStressed->setStyleSheet(QLatin1String("selection-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setCursor(QCursor(Qt::PointingHandCursor));
        menuHelp->setAutoFillBackground(false);
        menuHelp->setStyleSheet(QLatin1String("selection-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuTools->setCursor(QCursor(Qt::PointingHandCursor));
        menuTools->setAutoFillBackground(false);
        menuTools->setStyleSheet(QLatin1String("selection-color: rgb(0, 0, 0);\n"
"selection-background-color: rgb(255, 255, 255);"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuStressed->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionPrint_Preview);
        menuFile->addAction(actionPDF);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuStressed->addAction(actionPlay);
        menuStressed->addAction(actionStop);
        menuStressed->addAction(actionPause);
        menuStressed->addAction(actionResume);
        menuHelp->addAction(actionMenu);
        menuTools->addAction(actionBold);
        menuTools->addAction(actionItalic);
        menuTools->addAction(actionUnderline);
        menuTools->addSeparator();
        menuTools->addAction(actionPos_Left);
        menuTools->addAction(actionPos_Right);
        menuTools->addAction(actionPos_Center);
        menuTools->addAction(actionJustify);
        menuTools->addAction(actionColor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hoot Notes Beta v1.02", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Create New </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open a document</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save your work</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as... ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave_as->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save specifically</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow", "Print ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Print</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
        actionPrint_Preview->setText(QApplication::translate("MainWindow", "Print Preview", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPrint_Preview->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Print Preview</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPDF->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Convert to PDF</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPDF->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Exit</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Undo your mistake</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Redo your mistake</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Copy onto clipboard</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Paste</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Cut onto your clipboard</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Start the music</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMenu->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        actionBold->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionBold->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Bold</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionBold->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Bold</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        actionBold->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
        actionItalic->setText(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionItalic->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">Italic</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionItalic->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUnderline->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Underline</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUnderline->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
        actionPos_Left->setText(QApplication::translate("MainWindow", "Pos Left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPos_Left->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Position left</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPos_Left->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
        actionPos_Right->setText(QApplication::translate("MainWindow", "Pos Right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPos_Right->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Position right</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPos_Right->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        actionPos_Center->setText(QApplication::translate("MainWindow", "Pos Center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPos_Center->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Position Center</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPos_Center->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
        actionJustify->setText(QApplication::translate("MainWindow", "Justify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionJustify->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Justify</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionColor->setText(QApplication::translate("MainWindow", "Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionColor->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Change color</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionColor->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Stop the song</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Pause the song</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionResume->setText(QApplication::translate("MainWindow", "Resume", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionResume->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Resume the song</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        comboStyle->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Position you text</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        comboFont->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Fonts</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        comboSize->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Size of Font</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuStressed->setTitle(QApplication::translate("MainWindow", "Stressed...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        menuHelp->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Need help?</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
