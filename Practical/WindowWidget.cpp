#include "WindowWidget.h"
#include <qlistwidget.h>
#include <qmessagebox.h>
#include <fstream>
#include "developwindow.h"
using namespace std;

WindowWidget::WindowWidget(Repository* r, Writer& w, QWidget *parent)
	: QWidget(parent), repo(r), w(w)
{
	ui.setupUi(this);
	this->connectAll();
	this->init();
}

void WindowWidget::sort()
{
	Idea aux;
	for (int i = 0; i < this->repo->ideas.size() - 1; i++)
		for (int j = i + 1; j < this->repo->ideas.size(); j++)
			if (this->repo->ideas[i].act > this->repo->ideas[j].act || \
				(this->repo->ideas[i].act == this->repo->ideas[j].act && \
					this->repo->ideas[i].creator > this->repo->ideas[j].creator))
			{
				aux = this->repo->ideas[i];
				this->repo->ideas[i] = this->repo->ideas[j];
				this->repo->ideas[j] = aux;
			}
}

WindowWidget::~WindowWidget()
{

}

void WindowWidget::init()
{
	if (this->ui.ideas->count() != 0)
		this->ui.ideas->clear();

	if (this->w.expertise != "Senior")
		this->ui.acceptButton->hide();
	else
		this->ui.acceptButton->show();

	bool ok = false;
	for (auto i : this->repo->ideas)
		if (i.creator == this->w.name && i.status == "accepted")
		{
			ok = true;
			break;
		}

	if (ok == true)
		this->ui.developButton->show();
	else
		this->ui.developButton->hide();

	this->sort();

	for (int i = 0; i < this->repo->ideas.size(); i++)
	{
		QString itemString = QString{ QString::fromStdString(this->repo->ideas[i].description)
			+ " - " + \
			QString::fromStdString(this->repo->ideas[i].status) + " - " + \
			QString::fromStdString(this->repo->ideas[i].creator) + " - " + \
			QString::number(this->repo->ideas[i].act) };
		QListWidgetItem* item = new QListWidgetItem{ itemString };
		if (this->repo->ideas[i].creator == this->w.name &&\
			this->repo->ideas[i].status == "accepted")
		{
			item->setBackground(QColor{ 0,255,0 });
		}
		this->ui.ideas->addItem(item);
	}
}

void WindowWidget::connectAll()
{
	QObject::connect(this->ui.addButton, SIGNAL(clicked()), SLOT(addButtonHandler()));
	QObject::connect(this->ui.acceptButton, SIGNAL(clicked()), SLOT(acceptButtonHandler()));
	QObject::connect(this->ui.developButton, SIGNAL(clicked()), SLOT(developButtonHandler()));
	QObject::connect(this->ui.saveButton, SIGNAL(clicked()), SLOT(saveButtonHandler()));
	QObject::connect(this->ui.ideas, SIGNAL(itemSelectionChanged()), SLOT(changedHandler()));
}

void WindowWidget::addButtonHandler()
{
	string name = this->ui.descriptionTextBox->text().toStdString();
	int act = this->ui.actTextBox->text().toInt();

	try
	{
		this->repo->add(name, act, this->w.name);
	}
	catch (exception& e)
	{
		QMessageBox error;
		error.critical(0, "Error", e.what());
		error.show();
	}
}

void WindowWidget::acceptButtonHandler()
{
	QModelIndexList index = this->ui.ideas->selectionModel()->selectedIndexes();
	if (this->ui.ideas->currentItem()->isSelected())
	{
		int i = index.at(0).row();

		this->repo->accept(i);
	}
}

void WindowWidget::developButtonHandler()
{
	for (auto i : this->repo->ideas)
	{
		if (i.creator == this->w.name && i.status == "accepted")
		{
			DevelopWindow* d = new DevelopWindow{ i };
			d->show();
		}
	}
}

void WindowWidget::saveButtonHandler()
{
	ofstream fout("plot.txt");

	this->sort();

	for (auto i : this->repo->ideas)
	{
		if (i.status == "accepted")
		{
			fout << "Act " << i.act << " - " << i.description << " (" << i.creator << ")" << '\n';
		}
	}

	fout.close();
}

void WindowWidget::changedHandler()
{
	QModelIndexList index = this->ui.ideas->selectionModel()->selectedIndexes();
	if (this->ui.ideas->currentItem()->isSelected())
	{
		int i = index.at(0).row();

		if (this->repo->ideas[i].status == "proposed")
			this->ui.acceptButton->setEnabled(true);
		else
			this->ui.acceptButton->setEnabled(false);
	}
}