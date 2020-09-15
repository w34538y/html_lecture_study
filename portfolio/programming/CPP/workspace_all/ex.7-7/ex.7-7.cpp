/*
 * ex.7-7.cpp
 *
 *  Created on: 2018. 10. 24.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

struct point
{
	int x;
	int y;
};

int swap(point &po1, point &po2)
{
	point temp;

	temp = po1;
	po1 = po2;
	po2 = temp;
}

int print (point po)
{
	cout << "(" << po.x << "," << po.y << ")" << endl;
}

int main(void)
{
	point p1 = {1,1};
	point p2 = {3,4};
	swap(p1,p2);

	cout << "p1 : ";
	print(p1);
	cout << "p2 : ";
	print(p2);

	return 0;
}




