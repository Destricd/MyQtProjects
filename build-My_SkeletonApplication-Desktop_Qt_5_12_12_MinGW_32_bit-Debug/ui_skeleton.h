/********************************************************************************
** Form generated from reading UI file 'skeleton.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKELETON_H
#define UI_SKELETON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Skeleton
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Skeleton)
    {
        if (Skeleton->objectName().isEmpty())
            Skeleton->setObjectName(QString::fromUtf8("Skeleton"));
        Skeleton->resize(800, 600);
        centralwidget = new QWidget(Skeleton);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Skeleton->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Skeleton);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Skeleton->setMenuBar(menubar);
        statusbar = new QStatusBar(Skeleton);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Skeleton->setStatusBar(statusbar);

        retranslateUi(Skeleton);

        QMetaObject::connectSlotsByName(Skeleton);
    } // setupUi

    void retranslateUi(QMainWindow *Skeleton)
    {
        Skeleton->setWindowTitle(QApplication::translate("Skeleton", "Skeleton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Skeleton: public Ui_Skeleton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKELETON_H
