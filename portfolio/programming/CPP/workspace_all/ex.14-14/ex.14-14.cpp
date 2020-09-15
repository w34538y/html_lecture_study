/*
 * ex.14-14.cpp
 *
 *  Created on: 2018. 11. 12.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

template <typename T>
class CArray{
private:
	T ary[5];

public:
	CArray(T a)
    {
		for (int i=0; i<5; i++)
			ary[i] = a;
    }
	void Print()
	{
		for (int i=0; i<5; i++)
			cout << ary[i] << "";
		cout << endl;
	}
};

template <typename T>
class CPoint {
private:
	int x,y;

public:
	CPoint(T a, T b);
	void Print();
};

int main(void)
{
	CArray<int> Ary1(100);
	Ary1.Print();

	CArray<double> Ary2(12.345);
	Ary2.Print();

	CArray<CPoint> Ary3(CPoint(3,4));
	Ary3.Print();

	return 0;
}


