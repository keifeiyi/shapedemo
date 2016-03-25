#include "stdafx.h"
#include "Square.h"

using namespace std;



Square::Square(double db_X1, double db_Y1, double db_X2, double db_Y2, double db_X3, double db_Y3)
{
	dbX1 = db_X1;
	dbY1 = db_Y1;
	dbX2 = db_X2;
	dbY2 = db_Y2;
	dbX3 = db_X3;
	dbY3 = db_Y3;
	nShape = 2;

}

double Square::GetArea(int nIndex)
{
	cout << "ID:" << nIndex << ",the area is:" << (dbX1 - dbX2)*(dbX1 - dbX2) + (dbY1 - dbY2)*(dbY1 - dbY2) << endl;
	return (dbX1 - dbX2)*(dbX1 - dbX2) + (dbY1 - dbY2)*(dbY1 - dbY2);
}

void Square::input(list<Shape *> & lstShape)
{
	cout << " 请输入正方形的名字和两点坐标：dbX1, dbY1, dbX2, dbY2" << endl;
	cin >> strName;
	cin >> dbX1;
	cin >> dbY1;
	cin >> dbX2;
	cin >> dbY2;
	lstShape.push_back(this);


}

double Square::show(int nIndex)
{
	cout << "show:" << endl;
	cout << "ID :" << nIndex << " 两点坐标： （" << dbX1 << " , " << dbY1 << " ) ," << " (" << dbX2 << "," << dbY2 << ")" << endl;
	return nIndex, dbX1, dbY1, dbX2, dbY2;
}
double Square::move(int nIndex)
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


	cout << "new square 两点坐标:" << "(" << dbX1_ << "," << dbY1_ << ")" << " (" << dbX2_ << "," << dbY2_ << ")" << endl;
	return dbX1_, dbY1_, dbX2_, dbY2_;*/
	return 0;
}


void Square::create()
{

}



Square::Square()
{
	nShape = 2;
}
