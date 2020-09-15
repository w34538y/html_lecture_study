/*
 * ex.7-6.cpp
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

int move(point &po1, point po2) //value와 reference의 모두 장점을 얻기위해 const를 사용
{
	po1.x = po1.x + po2.x;
	po1.y = po1.y + po2.y;
}

int print (point po)
{
	cout << "(" << po.x << "," << po.y << ")" << endl;
}

int main(void)
{
	point p1 = {1,1};
	point p2 = {3,4};
	move(p1,p2);
	print(p1);

	return 0;
}


