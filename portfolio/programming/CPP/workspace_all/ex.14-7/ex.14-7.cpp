/*
 * ex.14-7.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class Cpoint {
private:
	int x;
	int y;

public:
	Cpoint(int a = 0, int b = 0) : x(a), y(b) {}
	friend ostream &operator<<(ostream &out, const Cpoint &po);
};

ostream &operator<<(ostream &out, const Cpoint &po)
{
	out << "(" << po.x << "," << po.y << ")";
	return out;

}
template <typename T>
void myswap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}
int main(void){
	int a = 3, b =4;
	double c = 3.5, d = 4.5;
	Cpoint P1(1,1), P2(2,2);

	cout << a << "," << b << endl; //기본자료형
	myswap(a,b);
	cout << a << "," << b << endl;

	cout << c << "," << d << endl;
	myswap(c,d);
	cout << c << "," << d << endl;

	cout << P1 << "," << P2 << endl; //객체
	myswap(P1,P2);
	cout << P1 << "," << P2 << endl;

	return 0;
}
