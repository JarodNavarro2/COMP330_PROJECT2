/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
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
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *buttonAt;
    QPushButton *buttonPound;
    QPushButton *buttonArrow;
    QPushButton *buttonEx;
    QPushButton *buttonURL;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuStressed;
    QMenu *menuHelp;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 543);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));\n"
"background-image: url(\":/Images/images/win/background.png);\")\n"
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
"     <"
                        "layout class=\"QVBoxLayout\" name=\"verticalLayout\">\n"
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
"       <"
                        "/spacer>\n"
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
"      </ite"
                        "m>\n"
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
" "
                        "      <spacer name=\"verticalSpacer_10\">\n"
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
"          "
                        "<width>20</width>\n"
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
"      "
                        "    <height>40</height>\n"
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
"     <width>542"
                        "</width>\n"
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
""
                        "    <addaction name=\"actionPaste\"/>\n"
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
"   <addaction name=\""
                        "menuFile\"/>\n"
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
"    <iconset resource=\"resources.qrc\""
                        ">\n"
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
"   <property na"
                        "me=\"icon\">\n"
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
"    "
                        "<string>Quit </string>\n"
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
""
                        "   <property name=\"icon\">\n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/images/win/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/images/win/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/images/win/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/images/win/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionPrint_Preview = new QAction(MainWindow);
        actionPrint_Preview->setObjectName(QStringLiteral("actionPrint_Preview"));
        actionPDF = new QAction(MainWindow);
        actionPDF->setObjectName(QStringLiteral("actionPDF"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/images/win/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPDF->setIcon(icon4);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/images/win/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/images/win/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/images/win/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/images/win/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Images/images/win/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon9);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/images/win/mona.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon10);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/images/win/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon11);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QStringLiteral("actionItalic"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Images/images/win/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Images/images/win/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon13);
        actionPos_Left = new QAction(MainWindow);
        actionPos_Left->setObjectName(QStringLiteral("actionPos_Left"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Images/images/win/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Left->setIcon(icon14);
        actionPos_Right = new QAction(MainWindow);
        actionPos_Right->setObjectName(QStringLiteral("actionPos_Right"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Images/images/win/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Right->setIcon(icon15);
        actionPos_Center = new QAction(MainWindow);
        actionPos_Center->setObjectName(QStringLiteral("actionPos_Center"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Images/images/win/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPos_Center->setIcon(icon16);
        actionJustify = new QAction(MainWindow);
        actionJustify->setObjectName(QStringLiteral("actionJustify"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Images/images/win/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon17);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 120, 561, 301));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        buttonAt = new QPushButton(centralWidget);
        buttonAt->setObjectName(QStringLiteral("buttonAt"));
        buttonAt->setEnabled(true);
        buttonAt->setGeometry(QRect(20, 130, 31, 31));
        buttonAt->setStyleSheet(QLatin1String("font: 87 30pt \"Futura\";\n"
"background-color: rgba(255, 255, 255, 33);\n"
"color: rgb(23, 147, 163);"));
        buttonPound = new QPushButton(centralWidget);
        buttonPound->setObjectName(QStringLiteral("buttonPound"));
        buttonPound->setGeometry(QRect(20, 190, 31, 31));
        buttonPound->setStyleSheet(QLatin1String("font: 87 30pt \"Futura\";\n"
"background-color: rgba(255, 255, 255, 33);\n"
"color: rgb(23, 147, 163);"));
        buttonArrow = new QPushButton(centralWidget);
        buttonArrow->setObjectName(QStringLiteral("buttonArrow"));
        buttonArrow->setGeometry(QRect(20, 250, 31, 31));
        buttonArrow->setStyleSheet(QLatin1String("font: 87 30pt \"Futura\";\n"
"background-color: rgba(255, 255, 255, 33);\n"
"color: rgb(23, 147, 163);"));
        buttonEx = new QPushButton(centralWidget);
        buttonEx->setObjectName(QStringLiteral("buttonEx"));
        buttonEx->setGeometry(QRect(20, 310, 31, 31));
        buttonEx->setStyleSheet(QLatin1String("font: 87 30pt \"Futura\";\n"
"background-color: rgba(255, 255, 255, 33);\n"
"color: rgb(23, 147, 163);"));
        buttonURL = new QPushButton(centralWidget);
        buttonURL->setObjectName(QStringLiteral("buttonURL"));
        buttonURL->setGeometry(QRect(20, 370, 31, 31));
        buttonURL->setStyleSheet(QLatin1String("font: 87 18pt \"Futura\";\n"
"background-color: rgba(255, 255, 255, 33);\n"
"color: rgb(23, 147, 163);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -30, 671, 561));
        label->setStyleSheet(QStringLiteral("image: url(:/Images/images/win/background.png);"));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        buttonAt->raise();
        buttonPound->raise();
        buttonArrow->raise();
        buttonEx->raise();
        buttonURL->raise();
        textEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuStressed = new QMenu(menuBar);
        menuStressed->setObjectName(QStringLiteral("menuStressed"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as... ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("MainWindow", "Print ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPrint_Preview->setText(QApplication::translate("MainWindow", "Print Preview", Q_NULLPTR));
        actionPDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPDF->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "Quit ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        actionBold->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionBold->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionItalic->setText(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionItalic->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionUnderline->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPos_Left->setText(QApplication::translate("MainWindow", "Pos Left", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPos_Left->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPos_Right->setText(QApplication::translate("MainWindow", "Pos Right", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPos_Right->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPos_Center->setText(QApplication::translate("MainWindow", "Pos Center", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPos_Center->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionJustify->setText(QApplication::translate("MainWindow", "Justify", Q_NULLPTR));
        actionColor->setText(QApplication::translate("MainWindow", "Color", Q_NULLPTR));
        buttonAt->setText(QApplication::translate("MainWindow", "@", Q_NULLPTR));
        buttonPound->setText(QApplication::translate("MainWindow", "#", Q_NULLPTR));
        buttonArrow->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        buttonEx->setText(QApplication::translate("MainWindow", "!", Q_NULLPTR));
        buttonURL->setText(QApplication::translate("MainWindow", "://", Q_NULLPTR));
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuStressed->setTitle(QApplication::translate("MainWindow", "Stressed...", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
