/********************************************************************************
** Form generated from reading UI file 'mianwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIANWINDOW_H
#define UI_MIANWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionASave;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionCuT;
    QAction *actionCopy;
    QAction *actionAll;
    QAction *actionPaste;
    QAction *actionOptions;
    QAction *actionFont;
    QAction *actionTheme;
    QAction *actionLanguage;
    QAction *actionCalculator;
    QAction *actionCalendar;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuTools;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #1e1e1e;\n"
"}\n"
"\n"
"QWidget {\n"
"    background-color: #1e1e1e;\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2d2d2d, stop:1 #252525);\n"
"    border-bottom: 1px solid #3c3c3c;\n"
"    padding: 2px;\n"
"    spacing: 3px;\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background: transparent;\n"
"    padding: 6px 12px;\n"
"    border-radius: 4px;\n"
"    margin: 2px;\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background-color: #005a9e;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #2d2d2d;\n"
"    border: 1px solid #3c3c3c;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 8px 30px 8px 20px;\n"
"    border-radius: 4px;\n"
"    margin: 2px;\n"
"    color: #"
                        "e0e0e0;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #0078d4;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 1px;\n"
"    background: #3c3c3c;\n"
"    margin: 6px 10px;\n"
"}\n"
"\n"
"QToolBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2d2d2d, stop:1 #252525);\n"
"    border-bottom: 1px solid #3c3c3c;\n"
"    padding: 4px;\n"
"    spacing: 4px;\n"
"}\n"
"\n"
"QToolBar::separator {\n"
"    width: 1px;\n"
"    background: #3c3c3c;\n"
"    margin: 4px 8px;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background: transparent;\n"
"    border: 1px solid transparent;\n"
"    border-radius: 4px;\n"
"    padding: 4px 8px;\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: #3c3c3c;\n"
"    border: 1px solid #0078d4;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: #4a4a4a;\n"
"}\n"
"\n"
"QStatusBar {\n"
"    background-color: #007acc;\n"
"    color: white;\n"
"    border-top: 1px solid #3c3c3c;\n"
"}"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionASave = new QAction(MainWindow);
        actionASave->setObjectName("actionASave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionCuT = new QAction(MainWindow);
        actionCuT->setObjectName("actionCuT");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionAll = new QAction(MainWindow);
        actionAll->setObjectName("actionAll");
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName("actionOptions");
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName("actionTheme");
        actionLanguage = new QAction(MainWindow);
        actionLanguage->setObjectName("actionLanguage");
        actionCalculator = new QAction(MainWindow);
        actionCalculator->setObjectName("actionCalculator");
        actionCalendar = new QAction(MainWindow);
        actionCalendar->setObjectName("actionCalendar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menuTools->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addAction(actionASave);
        menu->addSeparator();
        menu->addAction(actionQuit);
        menu_2->addAction(actionUndo);
        menu_2->addAction(actionCuT);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionAll);
        menu_2->addAction(actionPaste);
        menuTools->addAction(actionOptions);
        menuTools->addAction(actionFont);
        menuTools->addSeparator();
        menuTools->addAction(actionTheme);
        menuTools->addAction(actionLanguage);
        menuTools->addSeparator();
        menuTools->addAction(actionCalculator);
        menuTools->addAction(actionCalendar);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionASave);
        toolBar_2->addAction(actionUndo);
        toolBar_2->addAction(actionCuT);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaste);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(O)", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(C)", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(S)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionASave->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230(A)", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\351\202\204\345\216\237(U)", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCuT->setText(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213(T)", nullptr));
#if QT_CONFIG(shortcut)
        actionCuT->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275(C)", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270(A)", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\350\262\274\344\270\212(P)", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOptions->setText(QCoreApplication::translate("MainWindow", "\351\201\270\351\240\205\350\250\255\345\256\232(O)", nullptr));
#if QT_CONFIG(shortcut)
        actionOptions->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\351\253\224\350\250\255\345\256\232(F)", nullptr));
        actionTheme->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\241\214\345\210\207\346\217\233(T)", nullptr));
        actionLanguage->setText(QCoreApplication::translate("MainWindow", "\350\252\236\350\250\200\350\250\255\345\256\232(L)", nullptr));
        actionCalculator->setText(QCoreApplication::translate("MainWindow", "\350\250\210\347\256\227\346\251\237(C)", nullptr));
        actionCalendar->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\233\206(D)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210(F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257(E)", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267(T)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIANWINDOW_H
