#pragma once
#include "shape.h"

class Rectangle :
	public Shape
{
public:
	Rectangle(double dbX1, double dbY1, double dbX2, double dbY2, double dbX3,double dbY3);
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
	Rectangle();
};