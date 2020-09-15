/*
 * ex.5-16.cpp
 *
 *  Created on: 2018. 10. 22.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 3; //->정의
	int &num2 = num1; //c에서는 없던 기능 '&'right value에서는 변수주소값의미함
	//left에서는 참조(기존변수에 이름하나덧붙임 단,참조값을 중간에 바꿀수 없음)
    //->선언(메모리할당되지 않았음)
	num2 = 5;

	cout << num1 <<endl;
	cout << num2 <<endl;

	return 0;
}
