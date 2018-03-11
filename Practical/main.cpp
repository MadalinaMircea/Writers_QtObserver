#include "practical.h"
#include <QtWidgets/QApplication>
#include "GUI.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Repository* repo = new Repository{};
	GUI* gui = new GUI{ repo };

	return a.exec();
}
