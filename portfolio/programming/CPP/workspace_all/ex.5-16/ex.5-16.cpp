/*
 * ex.5-16.cpp
 *
 *  Created on: 2018. 10. 22.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 3; //->����
	int &num2 = num1; //c������ ���� ��� '&'right value������ �����ּҰ��ǹ���
	//left������ ����(���������� �̸��ϳ������� ��,�������� �߰��� �ٲܼ� ����)
    //->����(�޸��Ҵ���� �ʾ���)
	num2 = 5;

	cout << num1 <<endl;
	cout << num2 <<endl;

	return 0;
}
