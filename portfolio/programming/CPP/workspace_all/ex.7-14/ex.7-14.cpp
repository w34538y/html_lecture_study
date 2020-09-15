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
	int count;
	cpoint *ppo;

	cout << "필요한 객체의 수는? ";
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


