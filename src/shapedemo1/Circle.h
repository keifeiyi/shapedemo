#pragma once
#include "shape.h"

class Circle :
	public Shape
{
public:
	Circle(double r, double dbX, double dbY);
	virtual double GetArea(int nIndex);
	virtual void input(list<Shape *> & lstShapes);
	virtual double show(int nIndexs);
	virtual double move(int nIndex);
	virtual void create();
	




private:
	double radius;
	double dbX;
	double dbY;
	

public:
	Circle();
};
