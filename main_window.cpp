#include "main_window.hpp"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDoubleSpinBox>
#include <QDebug>

Main::Main(){
	QHBoxLayout * hLayout = new QHBoxLayout;
	QVBoxLayout * vLayout = new QVBoxLayout;
	QDoubleSpinBox * numer = new QDoubleSpinBox;
	QDoubleSpinBox * denom = new QDoubleSpinBox;
	QPushButton * add = new QPushButton("Add");
	QPushButton * quit = new QPushButton("Quit");

	numer->setRange(0, 100);
	numer->setPrefix("Score: ");

	denom->setRange(0, 100);
	denom->setPrefix("Out of: ");

	vLayout->addWidget(numer);
	vLayout->addWidget(denom);

	hLayout->addItem(vLayout);
	hLayout->addWidget(add);
	hLayout->addWidget(quit);

	this->setLayout(hLayout);

	QObject::connect(numer, SIGNAL(valueChanged(double)), this, SLOT(storeNum(double)));
	QObject::connect(denom, SIGNAL(valueChanged(double)), this, SLOT(storeDenom(double)));
	QObject::connect(add, SIGNAL(clicked()), this, SLOT(add()));
	QObject::connect(quit, SIGNAL(clicked()), this, SLOT(close()));
}

QString Main::numToLetter(double percent){
	QString letter;
	if(percent > 93){
		letter = "A";
	}
	else if(percent > 90){
		letter = "A-";
	}
	else if(percent > 87){
		letter = "B+";
	}
	else if(percent > 83){
		letter = "B";
	}
	else if(percent > 80){
		letter = "B-";
	}
	else if(percent > 77){
		letter = "C+";
	}
	else if(percent > 73){
		letter = "C";
	}
	else if(percent > 70){
		letter = "C-";
	}
	else if(percent > 67){
		letter = "D+";
	}
	else if(percent > 63){
		letter = "D";
	}
	else if(percent > 60){
		letter = "D-";
	}
	else{
		letter = "F";
	}

	return letter;
}

void Main::add(){
	double result = percent/range;
	result = result * 100;
	qDebug() << numToLetter(result);
}

void Main::storeNum(double d){
	this->percent = d;
}

void Main::storeDenom(double d){
	this->range = d;
}