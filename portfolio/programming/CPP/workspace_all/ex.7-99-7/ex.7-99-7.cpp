/*
 * ex.7-99-7.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() //�ݵ�� command â���� �����Ұ�
{
	string s; //string length�� c���� �������

	cout << "���ڿ��� �Է��ϼ���(�ѱ� �ȵ�)" << endl;
	getline(cin,s,'\n'); // ���ڿ� �Է�
	int len = s.length(); // ���ڿ��� ����
// cout << len << endl;

	for(int i=0; i<len; i++)
	{
		string first = s.substr(0,1); //0��°���� 1����
		string sub = s.substr(1,len-1); // (1��°���� ����)2��° ���ں��� ������
		s = sub + first; //c++���� '+'�� ��ü(���ڿ�)+��ü(���ڿ�)=�ε���� �ѵ���� �����϶�
		cout << s << endl;
	}

	return 0;
}


