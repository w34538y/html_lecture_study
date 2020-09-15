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
		cout << "합을 입력하세요 : ";
		cin >> sum;
		cout << "인원수를 입력하세요 : ";
	    cin >> n;
	    try {
	    	if (n<=0)
	    		throw n;
	    	else {
	    		average = sum / n;
	    	}
	    }

	    catch(int x) {
	    	cout << "예외 발생!! : ";
	    	cout << x << "으로 나눌 수 없음 \n" << endl;
	    	continue ;
	    }
	    cout << "평균 = " << average << endl << endl;

	    return 0;
	}
}


