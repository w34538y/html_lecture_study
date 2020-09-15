/*
 * ex.9--10.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: kgall305
 */

#include <iostream>
#include <cstring>
using namespace std;

class cstring {
private:
	int len;
	char *str;

public:
	cstring(const char *s = "Unknown") { //defalt매개변수
		len = strlen(s); //널캐릭터빼고 15바이트 len=15
		str = new char[len+1];
		strcpy(str,s);
	}
	cstring(const cstring &s) {
		len = s.len;
		str = new char[len+1];
		strcpy(str,s.str);
	}
	~cstring() {delete[]str;}
	void print() { cout << str << endl; }
};

int main(void)
{
	cstring str1 = "C++ Programming";
	cstring str2 = str1;

	str1.print();
	str2.print();

	return 0;
}


