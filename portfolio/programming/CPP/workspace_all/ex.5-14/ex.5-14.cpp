/*
 * ex.5-14.cpp
 *
 *  Created on: 2018. 10. 22.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char str1[255] = "C++";
	char str2[255] = "Programming";
	char str3[255];

	strcat(str1, str2); //�տ��Ͱ� �ڿ����� �����Ѵ�. (��, ���� ���� ������ ����ؾ� �Ѵ�
	strcpy(str3, str1);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;

	if(strcmp(str1, str3) == 0 ) //compare���ϴ°�
		cout << "str1�� str3�� ����." << endl;

	cout << "str1�� ���� : " << strlen(str1) << endl;

	return 0;
}


