/*
 * ex.4-5.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int sum(int Num1, int Num2, int Num3 = 1, int Num4 = 2, int Num5 = 3);
//Num3~5-����Ʈ �Ű�����, ȣ�⹮���� �����Ұ�� 3~5���� 1~3���� �̿�, ����,���ǹ����̳����� �Լ����𹮿����� ��밡��
int main(void)
{
	cout << sum(1,2) <<endl; //+1,2,3(Num3~5)
	cout << sum(1,2,3) <<endl;//+2,3
	cout << sum(1,2,3,4) <<endl;//+3
	cout << sum(1,2,3,4,5) <<endl;
}

int sum(int Num1, int Num2, int Num3, int Num4, int Num5)
{
	return (Num1 + Num2 + Num3 + Num4 + Num5);
}


