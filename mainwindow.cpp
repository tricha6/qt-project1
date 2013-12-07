#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

void MainWindow::on_Button2_clicked()
{
    std::cout << "Button2 " << std::endl;
    QString qname = "Tony";
    std::string name = qname.toStdString();
    std::cout << name << std::endl;
    int x = 5, y = 10;
    std::cout << x + y << std::endl;

}


void MainWindow::on_Button3_pressed()
{
    std::cout << "Button3 Pressed " << std::endl;
}

int MainWindow::on_lineEdit_editingFinished()
{
     std::cout << "Text entered " << std::endl;
}



void MainWindow::on_textEdit_selectionChanged()
{
     std::cout << "Second Text box " << std::endl;
}
