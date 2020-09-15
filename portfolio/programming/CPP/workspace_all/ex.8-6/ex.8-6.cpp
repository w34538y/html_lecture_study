/*
 * ex.8-6.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class ccalc
{
private:
	int result;

public:
	ccalc(int init = 0) {result = init;}
	void plus(int num) {result += num;}
	void minus(int num) {result -= num;}
	void print() {cout << "°á°ú : " << result << endl; }

};


int main(void)
{
	ccalc calc1;
	ccalc calc2(100);

	calc1.plus(5);
	calc1.minus(2);
	calc1.print();

	calc2.plus(100);
	calc2.minus(50);
	calc2.print();

	return 0;
}
