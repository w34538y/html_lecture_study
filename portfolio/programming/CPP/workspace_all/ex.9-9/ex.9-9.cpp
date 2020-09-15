/*
 * ex.9-9.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private:
	int x,y;

public:
//  cpoint(const cpoint &po) : {x=po.x * 2 , y=po.y * 2}
    cpoint(const cpoint &po) : x(po.x * 2 ), y(po.y * 2) {}
	cpoint(int a=0, int b=0) : x(a), y(b) {}
	void print() {cout << "(" << x << "," << y << ")" << endl; }
};


int main(void)
{
	cpoint p1(3,4);
	cpoint p2 = p1;
	p1.print();
	p2.print();

	return 0;
}
