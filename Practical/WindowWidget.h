#ifndef WINDOWWIDGET_H
#define WINDOWWIDGET_H

#include <QWidget>
#include "ui_WindowWidget.h"
#include "Observer.h"
#include "Domain.h"
#include "Repository.h"

class WindowWidget : public QWidget, public Observer
{
	Q_OBJECT

public:
	Repository* repo;
	Writer w;
	WindowWidget(Repository* r, Writer& w, QWidget *parent = 0);
	~WindowWidget();
	void init();
	void update() override { this->init(); }
	void connectAll();

private slots:
	void addButtonHandler();
	void acceptButtonHandler();
	void developButtonHandler();
	void saveButtonHandler();
	void changedHandler();
	void sort();

private:
	Ui::WindowWidget ui;
};

#endif // WINDOWWIDGET_H
