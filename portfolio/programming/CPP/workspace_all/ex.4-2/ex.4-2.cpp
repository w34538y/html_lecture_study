/*
 * ex.4-2.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */
//�Լ� �����̿�
#include <iostream>

using namespace std;

int sum(int x, int y);
double sum(double x, double y);//->�Լ�����

int main(void)//->�Լ����ǹ�
{
	cout << sum(3,4) << endl;
	cout << sum(1.1,2.2) << endl;

	return 0;
}

int sum(int x, int y)
{
	cout << "int sum" << endl;
	int z = x + y;
	return z;
}

double sum(double x, double y)
{
	cout<<"double sum"<<endl;
	double z = x+y;
	return z;
}

//c���� sum�ι������� c++������ �̸����� ������ �Լ� ��밡��
//�Լ�ȣ�⹫�� ���� �Լ� �տ� �����̳� ���ǹ��;���->������������
