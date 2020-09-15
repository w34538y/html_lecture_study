/*
 * ex.7-5.cpp
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

point sum(point po1, point po2)
{
	point po3;
	po3.x = po1.x + po2.x;
	po3.y =	po1.y + po2.y;
	return po3;
}
int printf(point po)
{
	cout << "(" << po.x << "," << po.y << ")" << endl;

	return 0;
}

int main(void)
{

	point p1 = {1,2};
	point p2 = {3,4};
	point p3;

	p3 = sum(p1,p2);
	printf(p3);

	return 0;
}

