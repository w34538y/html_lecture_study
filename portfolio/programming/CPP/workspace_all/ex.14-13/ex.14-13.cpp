/*
 * ex.14-13.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

template <typename T>
class Cpoint {
private:
	T x,y;

public:
	Cpoint(T a, T b);
	void Move(T a, T b);
	void print();
};

template <typename T>
Cpoint<T>::Cpoint(T a,T b) : x(a), y(b) {}

template <typename T>
void Cpoint<T>::print()
{
	cout << "(" << x << "," << y << ")" << endl;
//	cout << "(" << x << "," << y << ")" << '\n';
}

int main(void){
	Cpoint<int> P1(1,2);
	Cpoint<double> P2(1.1,2.2);

	P1.print();
	P2.print();

	return 0;
}
