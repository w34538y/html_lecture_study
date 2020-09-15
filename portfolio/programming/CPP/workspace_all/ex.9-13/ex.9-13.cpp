/*
 * ex.9-13.cpp
 *
 *  Created on: 2018. 11. 1.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint{
private:
	int x, y;

public:
	cpoint(int a=0, int b=0) : x(a), y(b) {}
	static int count;
	static int getcount() { return count; }
};

int cpoint :: count = 0;

int main(void)
{
	cpoint:: count++;
	cout << cpoint:: getcount() << endl;

	cpoint p1(1,2);
	cpoint p2(3,4);

	p1.count++;
	cout << cpoint::getcount() << endl;
	cout << p1.getcount() << endl;
	cout << p2.getcount() << endl;

	return 0;
}


