/*
 * ex.6-7.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int Reverse(int *x, int count)
{
	for(int i = 0; i < count / 2; i++)
	{
		int temp = x[i];
		x[i] = x[count - i - 1];
		x[count - i - 1] = temp;
	}
}

int main(void)
{
	int ary[5] = {1,2,3,4,5};

	Reverse(ary,5);

	for(int i = 0; i < 5; i++)
		cout << ary[i] << " ";
	cout << endl;

	return 0;
}


