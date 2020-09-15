/*
 * ex.14-5.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

template <typename T> //오버로딩과 비슷
T Sum(T a, T b); //template~()까지 함수선언문,정의문 모두 기입

int main(void)
{
	cout << Sum(1,2) << endl;
	cout << Sum(1.1,2.2) << endl;
	cout << Sum('1','2') << endl;

	return 0;
}

template <typename T>
T Sum(T a, T b) //template~()까지 함수선언문
{
	T c = a + b;
	return c;
}


