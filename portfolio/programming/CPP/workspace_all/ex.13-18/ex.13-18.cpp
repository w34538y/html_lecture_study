/*
 * ex.13-18.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class Cpoint {
private:
	int x,y;

public:
	Cpoint(int a, int b) : x(a), y(b) {}
	void print () { cout << "(" << x << "," << y << ")" << endl;}
};

class Ccircle {
protected:
	Cpoint center;
	double radius;

public:
	Ccircle(int a, int b, int r) : center(a,b), radius(r) {}//멤버초기화문
	void print () {
		center.print();
		cout << ":" << radius << endl;
	}
};

int main(void)
{
	Ccircle cir (1,1,1);
	cir.print();

	return 0;
}
