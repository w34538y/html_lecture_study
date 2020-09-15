/*
 * ex.9-10.cpp
 *
 *  Created on: 2018. 11. 1.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint {
private :
	int x, y;

public :
	cpoint(int a=0, int b=0) : x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend cpoint center(cpoint p1, cpoint p2); //friend선언(메모리변동없음)

};

cpoint center(cpoint p1, cpoint p2)
{
	cpoint po;
	po.x = (p1.x+p2.x) / 2;
	po.y = (p1.y+p2.y) / 2;
	return po;
}

int main(void)
{
	cpoint p1(1,2);
	cpoint p2(3,4);
	cpoint p3 = center(p1,p2);
	p3.print();

	return 0;
}


