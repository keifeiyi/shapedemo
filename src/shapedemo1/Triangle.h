#pragma once
#include "shape.h"
//using namespace std;

class Triangle :public Shape
{
public:
	Triangle(double db_X1, double db_Y1, double db_X2, double db_Y2, double db_X3, double db_Y3);
	virtual double GetArea(int nIndex);
	virtual void input(list<Shape *> & lstShape);
	virtual double show(int nIndexs);
	virtual double move(int nIndex);
	virtual void create();



private:
	double dbX1;
	double dbY1;
	double dbX2;
	double dbY2;
	double dbX3;
	double dbY3;

public:
	Triangle();
};
