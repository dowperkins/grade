#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

//includes
#include <QWidget>
#include <QString>
#include <QDebug>
#include "add_score.hpp"

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

signals:
	void addClicked();

private:
	double percent;
	double range;
	AddScore * score;
};

#endif