#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Note)
{
    ui->setupUi(this);
    connect(ui->actionNew_File, &QAction::triggered, this, &Note::On_action_newfile_triggered);
    connect(ui->actionOpen_File, &QAction::triggered, this, &Note::On_action_openfile_triggered);
    connect(ui->actionSave_As, &QAction::triggered, this, &Note::On_action_saveas_triggered);
    connect(ui->actionUndo, &QAction::triggered, this, &Note::On_action_undo_triggered);
    connect(ui->actionRedo, &QAction::triggered, this, &Note::On_action_redo_triggered);
    this->setCentralWidget(ui->textEdit);
}

Note::~Note()
{
    delete ui;
}

void Note::On_action_newfile_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void Note::On_action_openfile_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);
    currentFile = filename;

    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "warning", "can't open file" + file.errorString());

    }

    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void Note::On_action_saveas_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "warning", "can't save file" + file.errorString());
        return ;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}
void Note::On_action_redo_triggered()
{
    ui->textEdit->redo();
}
void Note::On_action_undo_triggered()
{
    ui->textEdit->undo();
}
