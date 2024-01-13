#include "widget.h"
#include <QMessageBox>
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_hello() {
    QMessageBox msgBox(this);
    msgBox.setIcon(QMessageBox::NoIcon);
    msgBox.setText("Hello, world!");
    msgBox.exec();
}
