/*
 * ex.9-12.cpp
 *
 *  Created on: 2018. 11. 1.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint{
private:
	int x;
	int y;
public:
	static int count;
	cpoint (int a=0, int b=0) : x(a), y(b) {}
};

int cpoint :: count = 0;

int main(void)
{
	cpoint::count = 99; //21�� �ٿ��� �޸𸮰� �Ҵ�� �׷��� ����
	cout << cpoint::count << endl;

	cpoint p1(1,2); //ù ��ü
	cpoint p2(3,4);

	p1.count = 1;//p1��ü�� count����� 1�� �����϶�
	//31�ٺ��� 33�� ǥ���� ����Ұ�
	cout << cpoint::count << endl;
	p2.count =2;
	cout << cpoint :: count << endl;
	cpoint::count = 3;
	cout << cpoint::count << endl;

	return 0;
}


