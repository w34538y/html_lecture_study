/*
 * ex.8-20.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint{
private:
	int x,y;

public:
	cpoint (int a, int b) : x(a), y(b) {print();}
	void print() { cout << "(" << x <<"," << y << ")" << endl; }
};

int main(void)
{
	cpoint p1(3,4);
}


