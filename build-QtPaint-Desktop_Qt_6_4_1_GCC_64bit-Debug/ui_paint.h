/********************************************************************************
** Form generated from reading UI file 'paint.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Paint)
    {
        if (Paint->objectName().isEmpty())
            Paint->setObjectName("Paint");
        Paint->resize(800, 600);
        centralwidget = new QWidget(Paint);
        centralwidget->setObjectName("centralwidget");
        Paint->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Paint);
        menubar->setObjectName("menubar");
        Paint->setMenuBar(menubar);
        statusbar = new QStatusBar(Paint);
        statusbar->setObjectName("statusbar");
        Paint->setStatusBar(statusbar);

        retranslateUi(Paint);

        QMetaObject::connectSlotsByName(Paint);
    } // setupUi

    void retranslateUi(QMainWindow *Paint)
    {
        Paint->setWindowTitle(QCoreApplication::translate("Paint", "Paint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint: public Ui_Paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
