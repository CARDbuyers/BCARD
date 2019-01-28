// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_INFODIALOG_H
#define BITCOIN_QT_INFODIALOG_H

#include "guiutil.h"

#include <QDialog>
#include <QHeaderView>
#include <QItemSelection>
#include <QKeyEvent>
#include <QMenu>
#include <QPoint>
#include <QTimer>
#include <QVariant>
#include <QWidget>

class OptionsModel;
class WalletModel;

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    enum ColumnWidths {
        DATE_COLUMN_WIDTH = 130,
        LABEL_COLUMN_WIDTH = 120,
        AMOUNT_MINIMUM_COLUMN_WIDTH = 160,
        MINIMUM_COLUMN_WIDTH = 130
    };
	
	explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();
 
    void setModel(WalletModel* model);
    

public slots:
    
	
protected:
    //virtual void keyPressEvent(QKeyEvent* event);

private:
    Ui::InfoDialog* ui;
    
    GUIUtil::TableViewLastColumnResizingFixer* columnResizingFixer;
    WalletModel* walletModel;
    QMenu* contextMenu;
    
    
    


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();
	void on_pushButton_5_clicked();
	void on_pushButton_6_clicked();
	void on_pushButton_7_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_pushButton_12_clicked();
	void on_pushButton_13_clicked();
	void on_pushButton_14_clicked();
	
    
    
};

#endif // BITCOIN_QT_INFODIALOG_H
