#include "stdafx.h"
#include "Rectangle.h"

#include<math.h>

using namespace std;

Rectangle::Rectangle(double db_X1, double db_Y1, double db_X2, double db_Y2, double db_X3,double db_Y3)
{

	dbX1 = db_X1;
	dbY1 = db_Y1;
	dbX2 = db_X2;
	dbY2 = db_Y2;
	dbX3 = db_X3;
	dbY3 = db_Y3;
	nShape = 3;
}
double Rectangle::GetArea(int nIndex)
{
	double a = sqrt((dbX1 - dbX3)*(dbX1 - dbX3) + (dbY1 - dbY3)*(dbY1 - dbY3));
	double b = sqrt((dbX1 - dbX2)*(dbX1 - dbX2) + (dbY1 - dbY2)*(dbY1 - dbY2));
	double c = sqrt((dbX3 - dbX2)*(dbX3 - dbX2) + (dbY3 - dbY2)*(dbY3 - dbY2));
	if (a > b&&a > c)
	{
		cout << "ID:" << nIndex << ",the area is:" << b*c << endl;
		return b*c;
		
	}
	else if (b > a&&b > c)
	{
		cout << "ID:" << nIndex << ",the area is:" << a*c << endl;
		return a*c;
	}
	else if (c > a&&c > b)
	{
		cout << "ID:" << nIndex << ",the area is:" << a*b << endl;
		return a*b;
	}
	
	//double dbSide = sqrt((dbX1 - dbX2)*(dbX1 - dbX2) + (dbY1 - dbY2)*(dbY1 - dbY2) - dbA*dbA);
	//cout << "ID:" << nIndex << ",the area is:" << dbA*dbSide << endl;
	//return dbA*dbSide;
}
void Rectangle::input(list<Shape *> & lstShape)
{
	cout << "请输入矩形的三点坐标：dbX1，dbY1,dbX2,dbY2,dbX3,dbY3" << endl;
	cin >> strName;
	cin >> dbX1;
	cin >> dbY1;
	cin >> dbX2;
	cin >> dbY2;
	cin >> dbX3;
	cin >> dbY3;
	//isrectangle b;
	//if (b.isrectangleorno( dbX1, dbY1,dbX2,dbY2,dbX3,dbY3)==0)
	//{
		lstShape.push_back(this);
	//}
	//else
	//{
	//	cout << "please input the right command" << endl;
	//}

}
double Rectangle::show(int nIndex)
{
	cout << "ID :" << nIndex << " 对角线的两点坐标和一个边长：（" << dbX1 << " , " << dbY1 << " ) ," << "(" << dbX2 << "," << dbY2 << ")," << "(" << dbX3 << "," << dbY3<< ")"  << endl;
	return nIndex, dbX1, dbY1, dbX2, dbY2, dbX3,dbY3;
}
double Rectangle::move(int nIndex)
{
	/*string strcommand;
	cout << "please input command:" << endl;
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	expression b;
	double dbX1_ = dbX1 + b.exp(str1);
	double dbY1_ = dbY1 + b.exp(str2);
	double dbX2_ = dbX2 + b.exp(str1);
	double dbY2_ = dbY2 + b.exp(str2);

	cout << "new rectangle 两点坐标:" << "(" << dbX1_ << "," << dbY1_ << ")" << " (" << dbX2_ << "," << dbY2_ << ")" << endl;
	return dbX1_, dbY1_, dbX2_, dbY2_;*/
	return 0;
}




void Rectangle::create(){}


Rectangle::Rectangle()
{
	nShape = 3;

}
