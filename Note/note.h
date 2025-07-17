#ifndef NOTE_H
#define NOTE_H

#include <QMainWindow>
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui {
class Note;
}
QT_END_NAMESPACE

class Note : public QMainWindow
{
    Q_OBJECT

public:
    Note(QWidget *parent = nullptr);
    ~Note();



private slots:
    void On_action_newfile_triggered();
    void On_action_openfile_triggered();
    void On_action_saveas_triggered();
    void On_action_redo_triggered();
    void On_action_undo_triggered();

private:
    Ui::Note *ui;
    QString currentFile = "";
};
#endif // NOTE_H
