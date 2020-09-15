/*
 * ex.9-14.cpp
 *
 *  Created on: 2018. 11. 1.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint{
private:
	int x;
	int y;
	static int count;

public:
	cpoint(int a=0, int b=0) : x(a), y(b) {count++;}
	~cpoint() {count--;}
	static int getcount() { return count; }

};

int cpoint::count = 0;

int main(void)
{
	cout << "count : " << cpoint::getcount() << endl;

	cpoint p1(1,2);
	cpoint *p2 = new cpoint(3,4);

	cout << "count : " << cpoint::getcount() << endl;
	delete p2;
	cout << "count : " << p1.getcount() << endl;
}


