#ifndef PRACTICAL_H
#define PRACTICAL_H

#include <QtWidgets/QMainWindow>
#include "ui_practical.h"

class Practical : public QMainWindow
{
	Q_OBJECT

public:
	Practical(QWidget *parent = 0);
	~Practical();

private:
	Ui::PracticalClass ui;
};

#endif // PRACTICAL_H
