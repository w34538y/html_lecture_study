/*
 * ex.7-99-7.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() //반드시 command 창에서 실행할것
{
	string s; //string length를 c에서 사용했음

	cout << "문자열을 입력하세요(한글 안됨)" << endl;
	getline(cin,s,'\n'); // 문자열 입력
	int len = s.length(); // 문자열의 길이
// cout << len << endl;

	for(int i=0; i<len; i++)
	{
		string first = s.substr(0,1); //0번째에서 1글자
		string sub = s.substr(1,len-1); // (1번째글자 제외)2번째 글자부터 끝까지
		s = sub + first; //c++에서 '+'는 객체(문자열)+객체(문자열)=두덩어리를 한덩어리로 연결하라
		cout << s << endl;
	}

	return 0;
}


