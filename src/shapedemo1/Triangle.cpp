#include "stdafx.h"
#include "Triangle.h"

using namespace std;


Triangle::Triangle(double db_X1, double db_Y1, double db_X2, double db_Y2, double db_X3, double db_Y3)
{
	dbX1 = db_X1;
	dbY1 = db_Y1;
	dbX2 = db_X2;
	dbY2 = db_Y2;
	dbX3 = db_X3;
	dbY3 = db_Y3;
	nShape = 1;
}

double Triangle::GetArea(int nIndex)
{
	cout << "ID:" << nIndex << ",the area is:" << 0.5*(dbX1*dbY2 - dbX2*dbY1) + 0.5*(dbX2*dbY3 - dbX3*dbY2) + 0.5*(dbX3*dbY1 - dbX1*dbY3) << endl;
	return 0.5*(dbX1*dbY2 - dbX2*dbY1) + 0.5*(dbX2*dbY3 - dbX3*dbY2) + 0.5*(dbX3*dbY1 - dbX1*dbY3);
}

void Triangle::input(list<Shape *> & lstShape)
{
	cout << "请输入三角形名字和三点坐标：dbX1,dbY1,dbX2,dbY2,dbX3,dbY3" << endl;
	cin >> strName;
	cin >> dbX1;
	cin >> dbY1;
	cin >> dbX2;
	cin >> dbY2;
	cin >> dbX3;
	cin >> dbY3;
	//istriangle k;
	//if (k.istriangleorno( dbX1, dbY1,dbX2,dbY2,dbX3,dbY3)==1)
	//{
	lstShape.push_back(this);
	//}
	//else
	//{
	//	cout << "please input the right command" << endl;
	//}
}
double Triangle::show(int nIndex)
{
	cout << "ID :" << nIndex << " 三点坐标：（" << dbX1 << " , " << dbY1 << " ) ," << "(" << dbX2 << "," << dbY2 << ")" << "(" << dbX3 << "," << dbY3 << ")" << endl;
	return nIndex, dbX1, dbY1, dbX2, dbY2, dbX3, dbY3;
}
double Triangle::move(int nIndex)
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
	double dbX3_ = dbX3 + b.exp(str1);
	double dbY3_ = dbY3 + b.exp(str2);
	cout << "new triangle 三点坐标:" << "(" << dbX1_ << "," << dbY1_ << ")" << " (" << dbX2_ << "," << dbY2_ << ")" << " (" << dbX3_ << "," << dbY3_ << ")" << endl;
	return dbX1_, dbY1_, dbX2_, dbY2_, dbX3_, dbY3_;*/
	return 0;

}





void Triangle::create(){}



Triangle::Triangle()
{
	nShape = 1;
}
