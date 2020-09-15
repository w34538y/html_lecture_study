/*
 * ex.6-11.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int swap(int &x, &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(void)
{
	int a = 3, b = 4;
	cout << "a = " << a << "b = " << b << endl;
	swap(a,b);
	cout << "a = " << a << "b = " << b << endl;

	return 0;
}


