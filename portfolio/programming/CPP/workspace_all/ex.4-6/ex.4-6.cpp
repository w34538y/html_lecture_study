/*
 * ex.4-6.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int power(int x, int y=2)
{
	int result = 1;
	for(int i= 0; i<y; i++)
		result *=x;
	return result;
}

int main(void)
{
	cout <<"3ÀÇ 2½Â : " <<power(3) <<endl;
	cout <<"3ÀÇ 4½Â : " <<power(3,4) <<endl;
}

int power(int x, int y)
{
	return (x * y);
}


