#include<iostream>
#include "stdafx.h"
#include<string>
#include<math.h>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "shape.h"
#include "Square.h"
#include<cstdlib>
#include <list> 
#include<algorithm>

using namespace std;

int main()
{
	string strCommand;
	cout << "please input command" << endl;
	list<Shape *> lstShapes;
	getline(cin, strCommand);
	while (strCommand != "q")
	{
		string strFirst = strCommand.substr(0, 4);
		if (strCommand == "create circle")
		{
			Circle * pCircle = new Circle();

			pCircle->input(lstShapes);

		}
		else if (strCommand == "create triangle")
		{
			Triangle*pTriangle = new Triangle();

			pTriangle->input(lstShapes);

		}



		else if (strCommand == "create square")
		{
			Square*pSquare = new Square();

			pSquare->input(lstShapes);


		}
		else if (strCommand == "create rectangle")
		{
			Rectangle*pRectangle = new Rectangle();

			pRectangle->input(lstShapes);

		}
		else if (strFirst == "show")

		{
			string strSecond = strCommand.substr(0, 8);
			string strThree = strCommand.substr(5, 6);
			if (strSecond == "show all")
			{
				int i = 1;


				for (list<Shape *>::iterator itor = lstShapes.begin(); itor != lstShapes.end(); itor++)
				{
					Shape * pShape = *itor;
					pShape->show(i);
					i++;

				}

			}
			else
			{
				int j;
				int i = 1;
				j = atoi(strThree.c_str());
				for (list<Shape *>::iterator itor = lstShapes.begin(); itor != lstShapes.end(); ++itor)


				{
					Shape * pShape = *itor;
					if (i == j)

					{

						pShape->show(i);

						break;
					}
					i++;
				}
			}
		}
		else if (strFirst == "area")
		{
			string strSecond = strCommand.substr(0, 8);
			string strThree = strCommand.substr(5, 6);
			if (strSecond == "area all")
			{
				int i = 1;


				for (list<Shape *>::iterator itor = lstShapes.begin(); itor != lstShapes.end(); itor++)
				{
					Shape * pShape = *itor;
					pShape->GetArea(i);
					i++;

				}

			}
			else
			{
				int j;
				int i = 1;
				j = atoi(strThree.c_str());
				for (list<Shape *>::iterator itor = lstShapes.begin(); itor != lstShapes.end(); itor++)


				{
					Shape * pShape = *itor;
					if (i == j)
					{

						pShape->GetArea(i);
						break;
					}
					i++;
				}
			}

		}
		else if (strFirst == "move")
		{
			string strSecond = strCommand.substr(0, 8);
			string strThree = strCommand.substr(5, 6);
			int k;
			int i = 1;
			k = atoi(strThree.c_str());
			for (list<Shape *>::iterator itor = lstShapes.begin(); itor != lstShapes.end(); itor++)


			{
				Shape * pShape = *itor;
				if (i == k)
				{

					pShape->move(k);
					break;
				}
				i++;
			}
		}

		strCommand = "";
		getline(cin, strCommand);


	}


}