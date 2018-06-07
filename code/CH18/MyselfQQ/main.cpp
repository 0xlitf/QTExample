#include "widget.h"
#include <QApplication>
#include "drawer.h"

int main(int argc, char *argv[]) {
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	//    	QApplication::setAttribute(Qt::AA_DisableHighDpiScaling);
	QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
	QApplication a(argc, argv);
	Drawer drawer;
	drawer.resize(250, 700);
	drawer.show();

	return a.exec();
}
