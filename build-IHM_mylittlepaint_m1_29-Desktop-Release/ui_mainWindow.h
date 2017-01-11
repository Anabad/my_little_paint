/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionPrint;
    QAction *actionBrush;
    QAction *actionLine;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionKitten;
    QAction *actionColor;
    QAction *actionThickness;
    QAction *actionEllipse;
    QAction *actionResize_Image;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuBrush;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(519, 414);
        actionNew = new QAction(View);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionSave = new QAction(View);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionOpen = new QAction(View);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionPrint = new QAction(View);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionBrush = new QAction(View);
        actionBrush->setObjectName(QString::fromUtf8("actionBrush"));
        actionLine = new QAction(View);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionCircle = new QAction(View);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionRectangle = new QAction(View);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionKitten = new QAction(View);
        actionKitten->setObjectName(QString::fromUtf8("actionKitten"));
        actionColor = new QAction(View);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionThickness = new QAction(View);
        actionThickness->setObjectName(QString::fromUtf8("actionThickness"));
        actionEllipse = new QAction(View);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        actionResize_Image = new QAction(View);
        actionResize_Image->setObjectName(QString::fromUtf8("actionResize_Image"));
        centralWidget = new QWidget(View);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        View->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(View);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 519, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuBrush = new QMenu(menuBar);
        menuBrush->setObjectName(QString::fromUtf8("menuBrush"));
        View->setMenuBar(menuBar);
        mainToolBar = new QToolBar(View);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        View->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(View);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        View->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuBrush->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionPrint);
        menuTools->addAction(actionBrush);
        menuTools->addAction(actionLine);
        menuTools->addAction(actionCircle);
        menuTools->addAction(actionRectangle);
        menuTools->addAction(actionEllipse);
        menuBrush->addAction(actionColor);
        menuBrush->addAction(actionThickness);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QApplication::translate("View", "View", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("View", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("View", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("View", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("View", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("View", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("View", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("View", "Print", 0, QApplication::UnicodeUTF8));
        actionPrint->setShortcut(QApplication::translate("View", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionBrush->setText(QApplication::translate("View", "Brush", 0, QApplication::UnicodeUTF8));
        actionLine->setText(QApplication::translate("View", "Line", 0, QApplication::UnicodeUTF8));
        actionCircle->setText(QApplication::translate("View", "Circle", 0, QApplication::UnicodeUTF8));
        actionRectangle->setText(QApplication::translate("View", "Rectangle", 0, QApplication::UnicodeUTF8));
        actionKitten->setText(QApplication::translate("View", "Kitten", 0, QApplication::UnicodeUTF8));
        actionColor->setText(QApplication::translate("View", "Color", 0, QApplication::UnicodeUTF8));
        actionThickness->setText(QApplication::translate("View", "Thickness", 0, QApplication::UnicodeUTF8));
        actionEllipse->setText(QApplication::translate("View", "Ellipse", 0, QApplication::UnicodeUTF8));
        actionResize_Image->setText(QApplication::translate("View", "Resize Image", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("View", "File", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("View", "Tools", 0, QApplication::UnicodeUTF8));
        menuBrush->setTitle(QApplication::translate("View", "Pen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
