/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QAction *actionNew_File;
    QAction *actionOpen_File;
    QAction *actionSave_As;
    QAction *actionRedo;
    QAction *actionUndo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName("Note");
        Note->resize(470, 410);
        actionNew_File = new QAction(Note);
        actionNew_File->setObjectName("actionNew_File");
        actionOpen_File = new QAction(Note);
        actionOpen_File->setObjectName("actionOpen_File");
        actionSave_As = new QAction(Note);
        actionSave_As->setObjectName("actionSave_As");
        actionRedo = new QAction(Note);
        actionRedo->setObjectName("actionRedo");
        actionUndo = new QAction(Note);
        actionUndo->setObjectName("actionUndo");
        centralwidget = new QWidget(Note);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        Note->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Note);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 470, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        Note->setMenuBar(menubar);
        statusbar = new QStatusBar(Note);
        statusbar->setObjectName("statusbar");
        Note->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionUndo);

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QMainWindow *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "Note", nullptr));
        actionNew_File->setText(QCoreApplication::translate("Note", "New File", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("Note", "Open File", nullptr));
        actionSave_As->setText(QCoreApplication::translate("Note", "Save As", nullptr));
        actionRedo->setText(QCoreApplication::translate("Note", "Redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("Note", "Undo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Note", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Note", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
