/*
 * ex.13-5.cpp
 *
 *  Created on: 2018. 11. 8.
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
	ccircle &cir = sph;

	cout << "표면적X(단면적O) : " << cir.getarea() << endl; //ccircle의 getarea가 실행시킨다.
//  cout << cir.getvolume() << endl; 스피어클래스에 소속됨 따라서 접근 불가능

	return 0;
}


