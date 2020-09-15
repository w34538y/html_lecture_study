/*
 * ex.11-2.cpp
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
	cpoint sum(const cpoint &po) { return cpoint(x+po.x, y+po.y); }

	void print() {cout << "(" << x << "," << y << ")" << endl;}
};

int main(void)
{
	cpoint p1(1,1);
	cpoint p2(2,2);
	cpoint p3 = p1.sum(p2); //p1+p2;(p.3 오버로딩원리)
	p3.print();

	return 0;
}

