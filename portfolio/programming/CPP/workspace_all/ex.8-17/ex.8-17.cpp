/*
 * ex.8-17.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private:
	int x,y;

public:
	cpoint(int a, int b) {x = a; y =b; cout << "持失切 : " ; print();}
	~ cpoint(){ cout << "社瑚切 : "; print(); }
	void print() { cout << "(" << x << "," << y << ")" << endl; }

};


int main(void)
{
	cpoint ary[5] = {cpoint(1,1), cpoint(2,2), cpoint(3,3), cpoint(4,4), cpoint(5,5)};
	return 0;
}


