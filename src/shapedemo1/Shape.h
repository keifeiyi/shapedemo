#pragma once
#pragma once
#include<iostream>
#include<fstream>
#include<list>
#include <string>
using namespace std;

class Shape
{
public:
	virtual double GetArea(int nIndex) = 0;
	virtual  double show(int nIndex) = 0;
	virtual void input(list<Shape *> & lstShape) = 0;
	virtual double move(int nIndex) = 0;
	virtual void create() = 0;

	int nShape;
	string strName;
	string getName();
	int nIndex;
};
