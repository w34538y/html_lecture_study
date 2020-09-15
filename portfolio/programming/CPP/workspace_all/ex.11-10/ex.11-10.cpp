/*
 * ex.11-10.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: kgall305
 */

#include <iostream>
 //ostream=outstream의 약자
using namespace std;

class cpoint{
private:
	int x, y;

public:
	cpoint (int a=0, int b=0) : x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend ostream &operator<<(ostream &out, const cpoint &po);
};

ostream &operator << (ostream &out, const cpoint &po)
//객체자체가 리턴되야 cout~")"가 붙어서 출력된다, 내용이 덧붙여지니까 cont ostrema &out하면 안됨
{
	out << "(" << po.x << "," << po.y << ")";
	return out;
}

int main(void)
{
	cpoint p1(3,4);
	cout << p1 << endl;

	return 0;
}

