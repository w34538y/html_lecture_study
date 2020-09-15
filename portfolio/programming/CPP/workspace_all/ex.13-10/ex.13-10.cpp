/*
 * ex.13-10.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: kgall305
 */

#include <iostream>
#define pi 3.14
using namespace std;

class ccircle {
public:              //private�̿��� ��� radius�� ccircle�Ҽ��̱⿡ ���Ǿ����� �Ұ���,
	int x,y;
	double radius;

public:
	ccircle(int a, int b, double r) : x(a), y(b), radius(r) {}
//	double getarea () { return (pi * radius * radius); }
	virtual double getarea () { return (pi * radius * radius); }
	virtual ~ ccircle () {} // -1
};

class csphere: public ccircle{ //public ccircle=ȭ��ǥ
//�Ҹ��ڷ� �������ε��ؾ��Ѵٴ� �ǹ� ���� �̷���-1
public:
	int z;

public:
	csphere(int a, int b, int c, double r) : ccircle(a,b,r), z(c) {}
//	double getarea () { return (4*ccircle::getarea());}
//	double getarea () { return (4*pi * radius * radius); }
	virtual double getarea () { return (4*pi * radius * radius); }
	double getvolume () { return ((4.0/3.0) * pi * radius * radius * radius); }

};

int main(void)
{
	int input;
	ccircle *pcir;

	cout << "�Է�(1-ccorcle, 2-csphere) : ";
	cin >> input;

	if(input == 1)
		pcir = new ccircle(1,1,1);
	else
		pcir = new csphere(1,1,1,1);

	cout << "���� : " << pcir->getarea() <<endl;

	return 0;
}
//�������ε�:�Լ�ȣ���Ҷ� ȣ�⹮�� ����(������-�������ε�,����ð�-�������ε�)
//�������ε�:�����Լ�, ����������� ȣ���Լ��� ���´�

