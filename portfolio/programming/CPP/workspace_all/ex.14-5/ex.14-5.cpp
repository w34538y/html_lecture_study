/*
 * ex.14-5.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

template <typename T> //�����ε��� ���
T Sum(T a, T b); //template~()���� �Լ�����,���ǹ� ��� ����

int main(void)
{
	cout << Sum(1,2) << endl;
	cout << Sum(1.1,2.2) << endl;
	cout << Sum('1','2') << endl;

	return 0;
}

template <typename T>
T Sum(T a, T b) //template~()���� �Լ�����
{
	T c = a + b;
	return c;
}


