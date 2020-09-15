/*
 * ex.8-5.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private:
	int x;
	int y;

public:
	cpoint() { x=0; y=0; }
	cpoint(int a) {x = a; y = a;}
	cpoint(int a, int b) {x = a; y = b;}
	void print() {cout << "(" << x << "," << y << ")" << endl; }
};

int main(void)
{
	cpoint p1; //p1=°´Ã¼
	cpoint p2(2);
	cpoint p3(3,4);

	p1.print();
	p2.print();
	p3.print();

	return 0;
}

