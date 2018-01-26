#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("QBot");
    ui->SendButton->setEnabled(false);
    memoryBlock = new KWordBlock();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ChatEdit_textChanged()
{
    if(ui->ChatEdit->toPlainText().length() == 0)
        ui->SendButton->setEnabled(false);
    else
        ui->SendButton->setEnabled(true);
}

void MainWindow::on_SendButton_clicked()
{
    QString input = ui->ChatEdit->toPlainText();
    ui->ChatBrowser->append(input);
    ui->ChatEdit->clear();
    std::string output = memoryBlock->Find(input.toStdString());
    std::cout<<output;

    ui->ChatBrowser->append(output.c_str());
}
