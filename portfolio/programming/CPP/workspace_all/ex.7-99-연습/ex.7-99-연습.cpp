/*
 * ex.7-99-연습.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class person
{
	string name;
	string tel;
public:
	person();
	string getname() { return name; }
	string gettel() { return tel; }
	void set(string n, string t)
	{
		//set-name tel값을 넣는 기능
		name = n;
		tel = t;
	}
};

int main(void)
{
	person *p = new person[3];
	string name, tel;
	int i;

	if( p == NULL )
	{
		cout <<"메모리가 부족합니다." << endl;
		exit(1);
	}

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for(i=0; i<3; i++)
	{
		cout << "사람" << i+1 << ">>";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for(i=0; i<3; i++)
	{
		cout << p[i].getname() << '';
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요. >>";
	cin >> name;
	for(i=0; i<3; i++)
	{
		if(name == p[i].getname()) {
			break;
		}
	}

	if(i<3)
		cout<<"전화 번호는 " << p[i].gettel() << endl;
	else
		cout<<"없는 사람입니다. " << endl;

	delete [] p;

	return 0;
}

//set함수:변수(3가지:정의,leftvalue,rightvalue)캡슐화되어있기때문 내부함수는 접근가능
