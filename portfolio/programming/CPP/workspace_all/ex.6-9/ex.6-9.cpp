/*
 * ex.6-9.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int square(int &Num)  //&Num��������,
{
	Num = Num * Num;
}

int main(void)
{
	int a = 3;
	square(a);  //�Լ��� ����κ��� ����(���������� a�� ����� ���� �ƴ϶� a������ü�� ������ sqaure�Լ� ������ �����϶�)
//���� �ƴ϶� ������ �Ѿ
	cout << a << endl;

	return 0;
}
//call by refrence:�������� �ƴ϶� ��ü�� �Ѿ
//���� ������ (6-2)�� ��������

