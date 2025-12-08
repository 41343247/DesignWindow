#include "mainwindow.h"
#include <QFileDialog>
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

MainWindow::~MainWindow() {}

void MainWindow::on_actionASave_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,tr("另存新檔"),"",tr("Text Files (*.txt);;All Files (*)"));

    if(fileName.isEmpty()){
        return;
    }

    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::warning(this,tr("錯誤"),tr("無法開啟檔案進行儲存"));
        return;
    }

    QTextStream out(&file);
    out<<textEdit->toPlainText();

    file.close();
}
