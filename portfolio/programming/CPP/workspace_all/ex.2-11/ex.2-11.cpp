/*
 * ex.2-11.cpp
 *
 *  Created on: 2018. 10. 17.
 *      Author: kgall305
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double Num1;
	double Num2;

	cout << "2개의 실수 입력 : ";

	cin >> Num1 >> Num2;

	cout << Num1 <<"+" <<Num2 <<"=" << Num1+Num2 <<endl;
	cout << Num1 <<"-" <<Num2 <<"=" << Num1-Num2 <<endl;
	cout << Num1 <<"*" <<Num2 <<"=" << Num1*Num2 <<endl;
	cout << Num1 <<"/" <<Num2 <<"=" << Num1/Num2 <<endl;

	return 0;
}
//분모가 '0'이면(불능) 프로그램시 에러가 뜨기 때문에 Num2값이 0인지 if문 사용하면 좋다


