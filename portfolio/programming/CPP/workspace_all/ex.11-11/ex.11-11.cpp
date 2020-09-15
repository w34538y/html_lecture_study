/*
 * ex.11-11.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class cpoint {
private:
	int x, y;

public:
	cpoint (int a = 0, int b = 0) : x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend ostream &operator<<(ostream &out, const cpoint &po);

	cpoint &operator=(const cpoint &po)
	{
		cout << "operator : " << endl;
		x=po.x; y=po.y;
		return *tnis;
	}
};

ostream &operator << (ostream &out, const cpoint &po)
{
	out << "(" << po.x << "," << po.y << ")";
	return out;
}
int main(void)
{
	cpoint p2(2,2);
	cpoint p1 = p2;    //복사 생성자 사용
	cout << p1 << endl;

	cpoint p3(3,3);
	p1 = p2 = p3;      //대입 연산자 사용
	cout << p1 << p2 << endl;

	cpoint p4(4,4);
	(p1 = p4 ) = p3;   //대입 연산자 사용
	cout << p1 << p4 << p3 << endl;

	return 0;
}


