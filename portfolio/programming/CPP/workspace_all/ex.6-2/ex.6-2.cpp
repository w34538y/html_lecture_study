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
	*pNum = *pNum * *pNum; //pnum ���ϱ� pnum
}

int main(void)
{
	int Num = 3;
	power(&Num); //num�ּҰ������� power�Լ����� ���ƿ�
	cout << Num << endl;

	return 0;
}


