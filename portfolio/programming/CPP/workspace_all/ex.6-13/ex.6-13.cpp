/*
 * ex.6-13-1.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int summulti(int *ary, int count, int *mul)
{
	int sum = 0;
	*mul = 1;
	for(int i=0; i < count; i++)
	{
		sum += ary[i];
		*mul *= ary[i];
	}

	return sum;
}

int summulti(int *ary, int count, int &mul)
{
	int sum = 0;
	mul = 1;
	for(int i=0; i < count; i++)
	{
		sum += ary[i];
	    mul *= ary[i];
	}

	return sum;
}

int main(void)
{
	int ary[5] = {1,2,3,4,5};
	int sum,multi;

	sum = summulti(ary, 5, &multi);
	cout << "sum : " << sum << endl;
	cout << "multi : " << multi << endl;

	sum = summulti(ary, 5, multi);
	cout << "sum : " << sum << endl;
	cout << "multi : " << multi << endl;

	return 0;
}
