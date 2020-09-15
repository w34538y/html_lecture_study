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
public:              //private이였을 경우 radius가 ccircle소속이기에 스피어계산이 불가능,
	int x,y;
	double radius;

public:
	ccircle(int a, int b, double r) : x(a), y(b), radius(r) {}
//	double getarea () { return (pi * radius * radius); }
	virtual double getarea () { return (pi * radius * radius); }
	virtual ~ ccircle () {} // -1
};

class csphere: public ccircle{ //public ccircle=화살표
//소멸자로 동적바인딩해야한다는 의미 따라서 이렇게-1
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

	cout << "입력(1-ccorcle, 2-csphere) : ";
	cin >> input;

	if(input == 1)
		pcir = new ccircle(1,1,1);
	else
		pcir = new csphere(1,1,1,1);

	cout << "면적 : " << pcir->getarea() <<endl;

	return 0;
}
//정적바인딩:함수호출할때 호출문을 결정(컨파일-정적바인딩,실행시간-동적바인딩)
//동적바인딩:가상함수, 실행시점에서 호출함수를 묶는다

