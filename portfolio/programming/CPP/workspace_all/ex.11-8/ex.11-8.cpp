/*
 * ex.11-8.cpp
 *
 *  Created on: 2018. 11. 5.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class cpoint{
private :
	int x,y;

public :
	cpoint(int a=0, int b=0) : x(a), y(b) {}
	void print() {cout << "(" << x << "," << y << ")" << endl;}
	cpoint &operator++(void) {++x; ++y; return *this;} //this�� ����Ű�� ���ƴ� ������, ��ü�� ����
};
//������ ������
int main(void)
{
	cpoint p1(3,4);
	++(++p1);
	p1.print();

	return 0;
}









//https://blog.naver.com/tkdldjs35/221303280187



