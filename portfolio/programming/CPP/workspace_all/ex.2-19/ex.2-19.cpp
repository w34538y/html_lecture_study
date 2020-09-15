/*
 * ex.2-19.cpp
 *
 *  Created on: 2018. 10. 17.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

bool isEven(int Num);

int main(void)
{
	cout.setf(ios_base::boolalpha);
	cout <<"4 : "<< isEven << endl;
	cout <<"101 : "<< isEven << endl;
	return 0;
}

bool isEven(int Num)
{
	bool RetValue;
	RetValue = (Num %2 == 0)? true : false;

	return RetValue;
}





