/*
 * ex.8-4.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private:
	int x;
	int y;

public: //����Լ�
	cpoint(int a, int b) {x = a; y = b;} // cpoint:�ڱ�Ҽ�class�̸��� ���� �������� ����->������
	//a,b�� �Ű����� xy-��ü
	void print() {cout << "(" << x << "," << y << ")" << endl; }
};

int main(void)
{
	cpoint p1(1,2); //��ü�̸�:p1, class�� �����ڰ� ȣ��, = cpoint p1=cpoint(1,2);
	cpoint p2 = cpoint(3,4); // ��ü2��p1,p2(main�Լ����� �¾�� stack������ ������ ���� heep=malloc or new, data������ static)

	p1.print();
	p2.print();

	return 0;
}

//p.4 �������ڽ� cpointp1;(�ùٸ�ǥ��)����Ʈ������ȣ��
//cpoint();(Ʋ��ǥ��)->�Լ������� �Ǳ⶧��    ����,�߿�
