#include "stdafx.h"
#include "Circle.h"
#include <string>
#include <iostream>


using namespace std;

Circle::Circle(double r, double _dbX, double _dbY)
{
	radius = r;
	dbX = _dbX;
	dbY = _dbY;
	nShape = 4;

}

double Circle::GetArea(int nIndex)
{
	double area;
	area = 3.14159*radius*radius;

	cout << "ID:" << nIndex << ",the area is:" << area << endl;
	return area;
}

void Circle::input(list<Shape *> & lstShapes)
{
	string strName_;
	double dbX_;
	double dbY_;
	double dbR_;
	cout << "请输入图形名字 圆心坐标_dbX _dbY和半径r：" << endl;
	cin >> strName;
	cin >> dbX;
	cin >> dbY;
	cin >> radius;
	
	lstShapes.push_back(this);





}

double Circle::show(int nIndex)
{
	cout << "show:" << endl;
	
	cout << "ID :" << nIndex << " ,圆心 （" << dbX << " , " << dbY << " ) ,半径 " << radius << endl;
	return nIndex, dbX, dbY, radius;
}

double Circle::move(int nIndex)
{


	/*string strcommand;
	cout << "please input command:" << endl;
	
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	//expression b;
	double dbX1_ = dbX + b.exp(str1);
	double dbY1_ = dbY + b.exp(str2);
	cout << "new circle 圆心坐标:" << "(" << dbX1_ << "," << dbY1_ << ")" << endl;

	return dbX1_, dbY1_;*/
	return 0;

}

void Circle::create()
{

}



Circle::Circle()
{
	nShape = 4;
}
