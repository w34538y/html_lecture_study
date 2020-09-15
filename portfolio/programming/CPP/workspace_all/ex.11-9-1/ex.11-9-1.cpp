/*
 * ex.11-9-1.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: kgall305
 */
//문제풀이
#include <iostream>
using namespace std;

class cpoint {
private:
	int x,y;

public:
	cpoint (int a=0, int b=0) : x(a), y(b){}
	cpoint &operator++(void){++x; ++y; return *this;}
	cpoint &operator++(int)
	{
		cpoint temp = *this;
		++x;
		++y;
		return temp;
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



