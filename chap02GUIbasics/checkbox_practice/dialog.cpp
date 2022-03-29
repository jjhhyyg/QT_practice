#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->rBtnBlack,&QRadioButton::clicked,this,&Dialog::setTextFontColor);
    connect(ui->rBtnRed,&QRadioButton::clicked,this,&Dialog::setTextFontColor);
    connect(ui->rBtnBlue,&QRadioButton::clicked,this,&Dialog::setTextFontColor);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_chkBoxUnder_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setUnderline(checked);
    ui->txtEdit->setFont(font);
}


void Dialog::on_chkBoxItalic_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setItalic(checked);
    ui->txtEdit->setFont(font);
}


void Dialog::on_chkBoxBold_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setBold(checked);
    ui->txtEdit->setFont(font);
}


void Dialog::setTextFontColor()
{
    QPalette plet = ui->txtEdit->palette();
    if(ui->rBtnBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else if(ui->rBtnRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(ui->rBtnBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else
        plet.setColor(QPalette::Text,Qt::black);
    ui->txtEdit->setPalette(plet);
}
