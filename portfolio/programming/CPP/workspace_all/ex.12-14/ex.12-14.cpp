/*
 * ex.12-14.cpp
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
	ccircle(int a, int b, double r) : x(a), y(b), radius(r) {}
	double getarea () { return (pi * radius * radius); }
};

class csphere: public ccircle{ //public ccircle=화살표
public:
	int z;

public:
	csphere(int a, int b, int c, double r) : ccircle(a,b,r), z(c) {}
//	double getarea () { return (4*ccircle::getarea());}
	double getarea () { return (4*pi * radius * radius); }
	double getvolume () { return ((4.0/3.0) * pi * radius * radius * radius); }

};

int main(void)
{
	csphere sph(1,1,1,1);
//	csphere sph(1,1,1,5);
	cout << "구의 표면적O : " << sph.getarea() << endl; //getarea는 부모area보다 자기area값을 실행시킨다.
	cout << "구의 부피 : " << sph.getvolume() << endl;

	return 0;
}
