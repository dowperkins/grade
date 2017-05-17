#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

//includes
#include <QWidget>
#include <QString>

//forward declarations

class Main : public QWidget{
	Q_OBJECT

public:
	Main();

	QString numToLetter(double percent);

public slots:
	void add();
	void storeNum(double d);
	void storeDenom(double d);

private:
	double percent;
	double range;
};

#endif