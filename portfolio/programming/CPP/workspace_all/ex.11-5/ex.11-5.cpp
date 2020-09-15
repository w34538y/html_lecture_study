/*
 * ex.11-5.cpp
 *
 *  Created on: 2018. 11. 5.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class cpoint{
private :
	int x,y;

public :
	cpoint(int a=0, int b=0) : x(a), y(b) {}
	void print() {cout << "(" << x << "," << y << ")" << endl;}
	friend cpoint operator+(const cpoint &po1, const cpoint &po2);

};

cpoint operator+(const cpoint &po1, const cpoint &po2)
{
	return cpoint(po1.x+po2.x, po1.y+po2.y);
}

int main(void)
{
	cpoint p1(1,1);
	cpoint p2(2,2);
	cpoint p3 = p1+p2;
	p3.print();

	return 0;
}




