/*
 * ex.12-6.cpp
 *
 *  Created on: 2018. 11. 7.
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
	double getarea () { return (pi * radius * radius); }
};

class csphere: public ccircle{ //public ccircle=ȭ��ǥ
public:
	int z;

public:
	double getvolume () { return ((4.0/3.0) * pi * radius * radius * radius); }

};

int main(void)
{
	csphere sph;

	sph.x = 1; sph.y=1; sph.z = 1; sph.radius = 5; //ccircle���� x,y,radius�� �����޾Ƽ� ��� ����

	cout << "���� ǥ����X : " << sph.getarea() << endl;
	cout << "���� ���� : " << sph.getvolume() << endl;

	return 0;
}

