/*
 * ex.7-99-6.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string names[5]; //문자열 배열(객체배열) 선언

	for (int i=0; i<5; i++)
	{
		cout << "이름 >> ";
		getline(cin, names[i], '\n');//콘솔인cin=키보드로부터 데이터입력받음 엔터값 나올때까지, sting객체의 객체배열name i번째
	}//첫값을 큰값으로 가정하고 비교해서 보다 더 큰값을 만나면 값을 바꿈
//fgets(뛰어쓰기를 할수 없음)
	string latter = names[0]; //네임 레이터= 문자열 초기화,대입연산자
	for(int i=1; i<5; i++)
	{
		if(latter < names[i]) // 사전 순으로 latter 문자열이 앞에 온다면 , '<'을 사용 sting인데 초기화,대입,관계연산자도 사용가능
		{
			latter = names[i]; // latter 문자열 변경, 대입연산자
		}//문자열임에도 대입,관계연산자를 이용함 c에서는 불가능
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;

	return 0;
}


