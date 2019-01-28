// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "infodialog.h"
#include "ui_infodialog.h"


#include "addresstablemodel.h"
#include "coincontroldialog.h"
#include "optionsmodel.h"
#include "walletmodel.h"


#include <QClipboard>
#include <QSettings>
#include <utilmoneystr.h>
#include <QtWidgets>
#include <QWidget>
#include "QtCore"
#include "QtGui"
#include "QDialog"
#include <QDesktopServices>
#include <QUrl>


InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);

   QLabel label1;
    label1.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png");

   QLabel label_2;
    label_2.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

   QLabel label_3;
    label_3.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

   QLabel label_4;
    label_4.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

QLabel label_5;
    label_5.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

QLabel label_6;
    label_6.setStyleSheet("background-image: url(:/res/images/wallet_logo_text.png)");

QLabel label_7;
    label_7.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

QLabel label_8;
    label_8.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");

QLabel label_9;
    label_9.setStyleSheet("background-image: url(:/res/images/CARDbuyers_logo_horizontal.png)");


}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::setModel(WalletModel* walletModel)
{
   
    
}

void InfoDialog::on_pushButton_clicked()
{
     QString link="https://github.com/CARDbuyers/BCARD";
     QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_2_clicked()
{
    QString link="https://discordapp.com/channels/459400044915720202/459423061884796948";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_3_clicked()
{
    QString link="http://explorer.cardbuyers.cc:3001";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_4_clicked()
{
    QString link="http://cardbuyers.cc";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_5_clicked()
{
    QString link="https://bitcointalk.org/index.php?topic=4686792.0";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_6_clicked()
{
    QString link="https://masternodes.online/currencies/BCARD/";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_7_clicked()
{
    QString link="https://crex24.com/pt/exchange/BCARD-BTC";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_8_clicked()
{
    QString link="https://wallet.crypto-bridge.org/market/BRIDGE.BCARD_BRIDGE.BTC";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_9_clicked()
{
    QString link="https://twitter.com/CARDbuyersCoin";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_12_clicked()
{
    QString link="https://github.com/CARDbuyers/BCARD-link/blob/master/BCARD_WP_v1.2.3.pdf";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_13_clicked()
{
    QString link="https://mncn.online/coins/BCARD";
    QDesktopServices::openUrl(QUrl(link));
}

void InfoDialog::on_pushButton_14_clicked()
{
    QString link="https://coinmarketcap.com/currencies/cardbuyers";
    QDesktopServices::openUrl(QUrl(link));
}