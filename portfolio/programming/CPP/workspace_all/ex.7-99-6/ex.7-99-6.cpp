/*
 * ex.7-99-6.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string names[5]; //���ڿ� �迭(��ü�迭) ����

	for (int i=0; i<5; i++)
	{
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');//�ܼ���cin=Ű����κ��� �������Է¹��� ���Ͱ� ���ö�����, sting��ü�� ��ü�迭name i��°
	}//ù���� ū������ �����ϰ� ���ؼ� ���� �� ū���� ������ ���� �ٲ�
//fgets(�پ�⸦ �Ҽ� ����)
	string latter = names[0]; //���� ������= ���ڿ� �ʱ�ȭ,���Կ�����
	for(int i=1; i<5; i++)
	{
		if(latter < names[i]) // ���� ������ latter ���ڿ��� �տ� �´ٸ� , '<'�� ��� sting�ε� �ʱ�ȭ,����,���迬���ڵ� ��밡��
		{
			latter = names[i]; // latter ���ڿ� ����, ���Կ�����
		}//���ڿ��ӿ��� ����,���迬���ڸ� �̿��� c������ �Ұ���
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;

	return 0;
}


