/*
 * ex.2-17.cpp
 *
 *  Created on: 2018. 10. 17.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

void calc(int a, int b);

int main(void)
{
	int a = 3, b = 4;

	calc(a,b);
	calc(1,2);
}

void calc(int a, int b)
{
	cout<<"µ¡¼À: "<<a+b<<endl;
	cout<<"»¬¼À: "<<a-b<<endl;
	cout<<"°ö¼À: "<<a*b<<endl;
	cout<<"³ª´°¼À: "<<a/b<<endl;

}


