#include "developwindow.h"
#include <string>
#include <fstream>
using namespace std;

DevelopWindow::DevelopWindow(Idea& i, QWidget *parent)
	: QWidget(parent), i(i)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromStdString(i.description + "(" + i.creator + ")"));
	this->ui.textEdit->setText(QString::fromStdString(this->i.description));
	this->connectAll();
}

DevelopWindow::~DevelopWindow()
{

}

void DevelopWindow::connectAll()
{
	QObject::connect(this->ui.saveButton, SIGNAL(clicked()), SLOT(saveButtonHandler()));
}

void DevelopWindow::saveButtonHandler()
{
	string name = this->windowTitle().toStdString();
	ofstream fout(name + ".txt");
	fout << this->ui.textEdit->toPlainText().toStdString();
	fout.close();
}