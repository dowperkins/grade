#include <QApplication>
#include <iostream>

#include "main_window.hpp"

int main(int argc, char * argv[]){
	QApplication app(argc, argv);

	Main window;

	window.show();

	return app.exec();
}