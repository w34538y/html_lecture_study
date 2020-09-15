/*
 * ex.4-3.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

double GetArea(double x, double y);
double GetArea(double z);

int main(void)
{
	cout <<"사각형 면적 :" << GetArea(3,4) << endl;
	cout <<"원 면적 : " << GetArea(5) << endl;

	return 0;
}

double GetArea(double x, double y)
{
	return (x*y);
}
double GetArea(double z)
{
	return (3.14*z*z);
}

