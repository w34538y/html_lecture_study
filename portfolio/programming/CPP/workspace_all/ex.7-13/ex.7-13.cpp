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
private: //���� class������ �̿� ����
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
	cpoint po[5]; //��ü�迭��

	for(int i=0; i <5; i++)
		po[i].setxy(i+1, i+1); //����Լ�ȣ��(setxy)�� ��ü(po)�� ��������Ѵ�

	for(int i=0; i <5; i++)
		po[i].print();
}


