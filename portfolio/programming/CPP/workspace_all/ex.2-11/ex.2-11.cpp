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

	cout << "2���� �Ǽ� �Է� : ";

	cin >> Num1 >> Num2;

	cout << Num1 <<"+" <<Num2 <<"=" << Num1+Num2 <<endl;
	cout << Num1 <<"-" <<Num2 <<"=" << Num1-Num2 <<endl;
	cout << Num1 <<"*" <<Num2 <<"=" << Num1*Num2 <<endl;
	cout << Num1 <<"/" <<Num2 <<"=" << Num1/Num2 <<endl;

	return 0;
}
//�и� '0'�̸�(�Ҵ�) ���α׷��� ������ �߱� ������ Num2���� 0���� if�� ����ϸ� ����


