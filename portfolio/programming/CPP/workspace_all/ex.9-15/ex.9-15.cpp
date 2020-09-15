/*
 * ex.9-15.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: kgall305
 */
//깊은 복사 생성자
#include <iostream>
using namespace std;

class carray{
private:
	int count;
	int *ary;

public:
	cArray(int co = 1) {
		count = co; ary = new int[count];
		for(int i=0; i<count; i++) ary[i] = i;
	}
	cArray(const cArray &Ary) {
		count = Ary.count;
		ary = new int[count];
		for(int i=0; i<count; i++)
			ary[i] = Ary.ary[i];
	}
	~cArray() {delete [] ary;}
	void print() {
		for(int i =0; i<count; i++) cout << ary[i] << "";
		cout << endl;
	}
};

int main(void)
{
	cArray ary1(5);
	cArray ary2 = ary1;

	ary1.print();
	ary2.print();

	return 0;
}

