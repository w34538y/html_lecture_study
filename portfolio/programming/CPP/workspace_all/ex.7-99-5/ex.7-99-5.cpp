/*
 * ex.7-99-5.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{//��Ʈ�� ����
	string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ���� , ���string ȫ�浿str
	string address("�뱸�� ������ ���굿");
	string copyaddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

	char text[] = {'L', 'o', 'v', 'e',' ', 'C', '+', '+', '\0'}; // C-��Ʈ�� // char text[]="love c++";
	string title(text);

	cout << str <<endl;
	cout << address << endl;
	cout << copyaddress << endl; //int i=3; int j = i;
	cout << title << endl;

	return 0;

}
//s.c_str()-�߿�

