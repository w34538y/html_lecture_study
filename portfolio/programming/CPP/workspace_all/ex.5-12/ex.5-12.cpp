/*
 * ex.5-12.cpp
 *
 *  Created on: 2018. 10. 19.
 *      Author: kgall305
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int *p;
	p = new int;

	if(p == NULL )
	{
		cout<<"메모리가 부족합니다." << endl;
		exit(1);
	}

    *p = 5;
	cout<< *p << endl;

	delete p;


	p = new int [5];  //배열을 동적메모리할당

	if(p == NULL )
		{
			cout<<"메모리가 부족합니다." << endl;
			exit(1);
		}

	for(int i =0; i < 5; i++)
	{
		p[i] = i +1;          //포인터에배열주소들어가면 포인터는 배열처럼쓸수있음
		cout << p[i] << " ";  //사이즈만큼 포인터가가리키는 공간증가 *(p+i)
	}
	delete[] p;    //p가 가리키는게 배열인경우 이렇게 해야 반납이된다  0번째만 반납되기때문에'[]'기호필요 없으면x

	return 0;
}


