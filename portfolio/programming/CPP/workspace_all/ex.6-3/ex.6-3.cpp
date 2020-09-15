/*
 * ex.6-3.cpp
 *
 *  Created on: 2018. 10. 22.
 *      Author: kgall305
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int *getarray(int count)
{
	int *p = new int [count];

	if(p == NULL)
	{
		cout << "메모리가 부족합니다." << endl;
		exit(1);
	}
	return p;
}

int main(void)
{
	int *pary;
	pary = getarray(5);

	for(int i = 0; i < 5; i++)
	{
		pary[i] = i+1;
		cout << pary[i] << endl;
	}

	delete[] pary;
}


