#ifndef DEVELOPWINDOW_H
#define DEVELOPWINDOW_H

#include <QWidget>
#include "ui_developwindow.h"
#include "Domain.h"

class DevelopWindow : public QWidget
{
	Q_OBJECT

public:
	Idea i;
	DevelopWindow(Idea& i, QWidget *parent = 0);
	~DevelopWindow();
	void connectAll();

private slots:
	void saveButtonHandler();

private:
	Ui::DevelopWindow ui;
};

#endif // DEVELOPWINDOW_H
