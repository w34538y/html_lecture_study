/*
 * ex.15-11.cpp
 *
 *  Created on: 2018. 11. 12.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

int main() {
	int n, sum, average;

	while(true) {
		cout << "���� �Է��ϼ��� : ";
		cin >> sum;
		cout << "�ο����� �Է��ϼ��� : ";
	    cin >> n;
	    try {
	    	if (n<=0)
	    		throw n;
	    	else {
	    		average = sum / n;
	    	}
	    }

	    catch(int x) {
	    	cout << "���� �߻�!! : ";
	    	cout << x << "���� ���� �� ���� \n" << endl;
	    	continue ;
	    }
	    cout << "��� = " << average << endl << endl;

	    return 0;
	}
}


