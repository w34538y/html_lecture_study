/*
 * ex.6-10.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int &getnumber(int &num)
{
	num = num + num;
	return num;               //�����Լ�
}

int main(void)
{
	int a = 3;

	getnumber(a); //�Լ�ȣ�⹮rightvalue�� �־���(=���)
	//a������ü�� getnumber�� �Ѿ
	cout << a << endl;

	getnumber(a) += 5; //12�� ����ִ� a��ü�� �Ѿ��
	cout << a << endl;

	getnumber(a) = 1;//17->34->1
	cout << a << endl;

	return 0;
}


