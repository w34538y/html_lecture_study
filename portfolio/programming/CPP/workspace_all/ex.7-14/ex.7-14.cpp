/*
 * ex.7-14.cpp
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
	int count;
	cpoint *ppo;

	cout << "�ʿ��� ��ü�� ����? ";
	cin >> count;
	ppo = new cpoint[count];

	cpoint *ptemp = ppo;
	for(int i=0; i<count; i++)
	{
		ptemp->setxy(i+1, i+1);
		ptemp++;
	}

	ptemp = ppo;
	for(int i=0; i<count; i++)
	{
		ptemp->print();
		ptemp++;
	}

	delete [] ppo;
}


