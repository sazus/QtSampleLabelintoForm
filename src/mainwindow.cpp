#include "mainwindow.h"
#include "ui_mainwindow.h"

/// オブジェクトの文字コードUTF-8にする
#pragma execution_character_set("utf-8")

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
    ui->labelSample->setText(tr(u8"ラベル変更"));
  /*
   * execution_character_set("utf-8")のprogma じゃなくても
   * u8プレフィックスをつけても大丈夫！
  * ui->labelSample->setText(tr(u8"ラベル変更"));
  */
}
