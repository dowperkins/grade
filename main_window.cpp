#include "main_window.hpp"
#include <iostream>
#include <QHBoxLayout>
#include <QPushButton>

Main::Main(){
	QHBoxLayout * layout = new QHBoxLayout;
	QPushButton * add = new QPushButton("Add");
	QPushButton * quit = new QPushButton("Quit");

	layout->addWidget(add);
	layout->addWidget(quit);

	this->setLayout(layout);

	QObject::connect(add, SIGNAL(clicked()), this, SLOT(add()));
	QObject::connect(quit, SIGNAL(clicked()), this, SLOT(close()));
}

void Main::add(){
	std::cout << "Here!\n";
}