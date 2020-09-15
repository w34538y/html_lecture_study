/*
 * ex.3-10.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */

#include <iostream>

using spacename std;

int main(void)
{
	int Num1, Num2;
	int Sum = 0;

	cout << "정수 2개 입력 : ";
	cin >> Num1 >> Num2;

	for(int i=Num1; i<=Num2; i++)
	{
		if(i/2)
		{
			Sum+=i;
		}
	}
}


