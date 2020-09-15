/*
 * ex.11-12.cpp
 *
 *  Created on: 2018. 11. 6.
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
	cstring(const char *s = "Unknown") {
		len = strlen(s);
		str = new char[len+1];
		strcpy(str,s);
	}
	cstring &operator=(const cstring &s) {
		delete [] str;
		len = s.len;
		str = new char[len+1];
//		if (str == NULL)
//		{
//			cout << "메모리가 부족합니다. " << endl;
//		}
		strcpy(str,s.str);
		return *tnis;
	}
	~cstring() {delete [] str;}
	void print() { cout << str << endl;	}
};

int main(void)
{
	 cstring str1 = "C++ Programming";
	 cstring str2 = "Hello C++";

	 str2 = str1;

	 str1.print();
	 str2.print();

	 return 0;
}



