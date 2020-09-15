/*
 * ex.2-10.cpp
 *
 *  Created on: 2018. 10. 17.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int main(void)
{
	int Num1,Num2;

	cout << "2개의 정수 입력 : ";

	cin>>Num1>>Num2;
//endl-줄바꿈, 콘솔아웃cout 콘솔인cin '<<'출력연산자 '>>'입력연산자
	cout<<Num1<<"+"<<Num2<<"="<<Num1+Num2<<endl;

	return 0;
}
//실수를 쓰면 실수하니까 정수를 쓰거나 정수로 저장했다가 출력할때 실수로 쓴다
