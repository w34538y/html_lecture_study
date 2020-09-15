/*
 * ex.6-2.cpp
 *
 *  Created on: 2018. 10. 22.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

int power(int *pNum)
{
	*pNum = *pNum * *pNum; //pnum 곱하기 pnum
}

int main(void)
{
	int Num = 3;
	power(&Num); //num주소값가지고 power함수갔다 돌아옴
	cout << Num << endl;

	return 0;
}


