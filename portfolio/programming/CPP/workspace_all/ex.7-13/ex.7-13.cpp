/*
 * ex.7-13.cpp
 *
 *  Created on: 2018. 10. 25.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private: //동일 class에서만 이용 가능
	int x;
	int y;

public:
	void setxy(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;

	}
};

int main(void)
{
	cpoint po[5]; //객체배열명

	for(int i=0; i <5; i++)
		po[i].setxy(i+1, i+1); //멤버함수호출(setxy)시 객체(po)를 적어줘야한다

	for(int i=0; i <5; i++)
		po[i].print();
}


