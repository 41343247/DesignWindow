#include "mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

MainWindow::~MainWindow() {}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = currentFilePath;
    
    // If no current file, prompt for file name like "Save As"
    if(fileName.isEmpty()){
        fileName = QFileDialog::getSaveFileName(this,tr("儲存檔案"),"",tr("Text Files (*.txt);;All Files (*)"));
        
        if(fileName.isEmpty()){
            return;
        }
        
        currentFilePath = fileName;
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
    
    // Update current file path after "Save As"
    currentFilePath = fileName;
}
