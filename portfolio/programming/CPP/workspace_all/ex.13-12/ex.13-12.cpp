/*
 * ex.13-12.cpp
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
	double getarea () { return (pi * radius * radius); }
	virtual ~ ccircle () {}
};

class csphere: public ccircle{ //public ccircle=ȭ��ǥ
public:
	int z;

public:
	csphere(int a, int b, int c, double r) : ccircle(a,b,r), z(c) {}
//	double getarea () { return (4*ccircle::getarea());}
	virtual double getarea () { return (4*pi * radius * radius); }
	double getvolume () { return ((4.0/3.0) * pi * radius * radius * radius); }

};
void printarea(ccircle &cir)
{
	cout << "���� : " << cir.getarea() << endl; //�߿��� �κ�
}

int main(void)
{
	ccircle cir (1,1,1);
	cout << cir.getarea () << endl;
	csphere sph(1,1,1,1);
	cout << sph.getarea () << endl;

	printarea(cir);
	printarea(sph);

	return 0;
}

//������ ���� ���� �̿��ؼ� ���� ����, ���� ���� ��Ȳ�� ���� ��갡��
//�ǹ����� ���� ���

