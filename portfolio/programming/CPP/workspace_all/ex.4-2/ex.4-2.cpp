/*
 * ex.4-2.cpp
 *
 *  Created on: 2018. 10. 18.
 *      Author: kgall305
 */
//함수 선언문이용
#include <iostream>

using namespace std;

int sum(int x, int y);
double sum(double x, double y);//->함수선언문

int main(void)//->함수정의문
{
	cout << sum(3,4) << endl;
	cout << sum(1.1,2.2) << endl;

	return 0;
}

int sum(int x, int y)
{
	cout << "int sum" << endl;
	int z = x + y;
	return z;
}

double sum(double x, double y)
{
	cout<<"double sum"<<endl;
	double z = x+y;
	return z;
}

//c에서 sum두번사용못함 c++에서는 이름같은 여러개 함수 사용가능
//함수호출무네 사용된 함수 앞에 선언문이나 정의문와야함->가독성떨어짐
