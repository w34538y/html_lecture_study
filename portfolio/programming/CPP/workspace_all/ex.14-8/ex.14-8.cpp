/*
 * ex.14-8.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: kgall305
 */

#include <iostream>
using namespace std;

class Cpoint {
private:
	char x,y,z;

public:
	Cpoint(char a = 0, char b = 0, char c = 0) : x(a), y(b), z(c) {}
	friend ostream &operator<<(ostream &out, const Cpoint &po);
};

ostream &operator<<(ostream &out, const Cpoint &po)
{
	out << "(" << po.x << "," << po.y << "," << po.z << ")";
	return out;

}
template <typename T1, typename T2, typename T3>
void print(T1 x, T2 y, T3 z) {
	cout <<  "(" << x << "," << y << "," << z << ")" << endl; //호환성문제로 endl;문제는 무시해도 됨
}

int main(void){
	Cpoint P1;

	print(1,2,3);
	print("abc",4,1.1);
	print('a',"abc",2.2);
	print(5,6,P1);

	return 0;
}


