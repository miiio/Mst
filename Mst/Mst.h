#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Mst.h"
#include "Graph.h"
#include <QFileDialog>
#include<qmessagebox.h>

class Mst : public QMainWindow
{
	Q_OBJECT

public:
	Mst(QWidget *parent = Q_NULLPTR);

private:
	Ui::MstClass ui;

public slots:
	void btnKrusalClick();
	void btnSaveClick();
	void btnLoadClick();
	void btnRandClick();
	void btnOkClick();
	void btnPrimClick();
};
