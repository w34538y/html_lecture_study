/*
 * ex.5-12.cpp
 *
 *  Created on: 2018. 10. 19.
 *      Author: kgall305
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int *p;
	p = new int;

	if(p == NULL )
	{
		cout<<"�޸𸮰� �����մϴ�." << endl;
		exit(1);
	}

    *p = 5;
	cout<< *p << endl;

	delete p;


	p = new int [5];  //�迭�� �����޸��Ҵ�

	if(p == NULL )
		{
			cout<<"�޸𸮰� �����մϴ�." << endl;
			exit(1);
		}

	for(int i =0; i < 5; i++)
	{
		p[i] = i +1;          //�����Ϳ��迭�ּҵ��� �����ʹ� �迭ó����������
		cout << p[i] << " ";  //�����ŭ �����Ͱ�����Ű�� �������� *(p+i)
	}
	delete[] p;    //p�� ����Ű�°� �迭�ΰ�� �̷��� �ؾ� �ݳ��̵ȴ�  0��°�� �ݳ��Ǳ⶧����'[]'��ȣ�ʿ� ������x

	return 0;
}


