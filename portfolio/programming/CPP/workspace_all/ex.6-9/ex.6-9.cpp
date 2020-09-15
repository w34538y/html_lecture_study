/*
 * ex.6-9.cpp
 *
 *  Created on: 2018. 10. 23.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int square(int &Num)  //&Num참조변수,
{
	Num = Num * Num;
}

int main(void)
{
	int a = 3;
	square(a);  //함수의 헤더부분을 보기(참조변수라서 a에 저장된 값이 아니라 a변수자체를 가지고 sqaure함수 실행후 복귀하라)
//값이 아니라 변수가 넘어감
	cout << a << endl;

	return 0;
}
//call by refrence:변수값이 아니라 자체가 넘어감
//좀더 직관적 (6-2)와 비교했을때

