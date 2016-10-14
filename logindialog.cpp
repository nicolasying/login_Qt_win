#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButtonLogin_clicked()
{
    if(ui->lineEditLogin->text().trimmed() == "Nicolas" && ui->lineEditPsw->text() == "010101" )
        accept();
    else {
        QMessageBox::warning(this, tr("Warning"), tr("user name or password error!"), QMessageBox::OK);\
        // ui->lineEditLogin->clear();
        ui->lineEditPsw->clear();
        ui->lineEditPsw->setFocus();
    }
}
