/*
 * ex.6-10.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int &getnumber(int &num)
{
	num = num + num;
	return num;               //지역함수
}

int main(void)
{
	int a = 3;

	getnumber(a); //함수호출문rightvalue에 있었음(=상수)
	//a변수자체를 getnumber로 넘어감
	cout << a << endl;

	getnumber(a) += 5; //12가 들어있는 a자체가 넘어옴
	cout << a << endl;

	getnumber(a) = 1;//17->34->1
	cout << a << endl;

	return 0;
}


