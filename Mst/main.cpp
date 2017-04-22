#include "Mst.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Mst w;
	w.show();
	return a.exec();
}
