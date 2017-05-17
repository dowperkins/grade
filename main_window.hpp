#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

//includes
#include <QWidget>

//forward declarations

class Main : public QWidget{
	Q_OBJECT

public:
	Main();

public slots:
	void add();

private:
	//
};

#endif