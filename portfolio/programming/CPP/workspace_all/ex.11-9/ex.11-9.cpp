/*
 * ex.11-9.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: kgall305
 */
//내가해본 숙제
#include <iostream>
using namespace std;

class cpoint {
private:
	int x,y;

public:
	cpoint (int a=0, int b=0) : x(a), y(b){}
	cpoint &operator++(int)
	{
		cpoint p1(x,y);
		x += 1;
		y += 1;
		return p1;
	}

	cpoint &operator--(int)
	{
		cpoint p2(x,y);
		x -= 1;
		y -= 1;
		return p2;
	}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
};

int main(void)
{
	cpoint p1(3,4);
	cpoint p2 =p1++;

	p1.print();
	p2.print();


	return 0;
}


