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
public:              //private이였을 경우 radius가 ccircle소속이기에 스피어계산이 불가능,
	int x,y;
	double radius;

public:
	double getarea () { return (pi * radius * radius); }
};

class csphere: public ccircle{ //public ccircle=화살표
public:
	int z;

public:
	double getvolume () { return ((4.0/3.0) * pi * radius * radius * radius); }

};

int main(void)
{
	csphere sph;

	sph.x = 1; sph.y=1; sph.z = 1; sph.radius = 5; //ccircle에서 x,y,radius를 물려받아서 계산 가능

	cout << "구의 표면적X : " << sph.getarea() << endl;
	cout << "구의 부피 : " << sph.getvolume() << endl;

	return 0;
}

