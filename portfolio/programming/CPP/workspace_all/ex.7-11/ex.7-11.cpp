/*
 * ex.7-11.cpp
 *
 *  Created on: 2018. 10. 25.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private: //class안에서만 사용가능
	int x; //setx는 외부에서 접근x 내부에서 접ㄷ
	int y;

 public : //s
 	void setx(int a)
 	{
 		if(a < 1 || a > 10)
 			cout << "x값 무효!" << endl;
 		else
 			x = a;
 	}
};

int main(void)
{
	cpoint p1;
//	p1.x = 100;
	p1.setx(100);

	return 0;
}

