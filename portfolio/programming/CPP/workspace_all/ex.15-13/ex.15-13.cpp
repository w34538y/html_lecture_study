/*
 * ex.15-13.cpp
 *
 *  Created on: 2018. 11. 12.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

int getExp(int base, int exp) {
	ifint value = 1;
	for (int n=0; n<exp; n++)
		value = value * base;
	return value;
}

int main() {
	int v = 0;
	try {
		v = getExp(2,3);
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;

	    v = getExp(2,-3);
     	cout << "2�� 3���� " << v << "�Դϴ�." << endl;
	}
	catch(char *s) {
		cout << s << endl;
		delet [] s;
	}

	return 0;
}


