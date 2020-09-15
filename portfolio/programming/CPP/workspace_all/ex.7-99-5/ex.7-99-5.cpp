/*
 * ex.7-99-5.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{//스트링 생성
	string str; // 빈 문자열을 가진 스트링 객체 생성 , 사람string 홍길동str
	string address("대구시 수성구 지산동");
	string copyaddress(address); // address의 문자열을 복사한 스트링 객체 생성

	char text[] = {'L', 'o', 'v', 'e',' ', 'C', '+', '+', '\0'}; // C-스트링 // char text[]="love c++";
	string title(text);

	cout << str <<endl;
	cout << address << endl;
	cout << copyaddress << endl; //int i=3; int j = i;
	cout << title << endl;

	return 0;

}
//s.c_str()-중요

