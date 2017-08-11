#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <kwordblock.h>
#include <QTextCodec>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ChatEdit_textChanged();

    void on_SendButton_clicked();

private:
    Ui::MainWindow *ui;
    KWordBlock *memoryBlock;
};

#endif // MAINWINDOW_H
