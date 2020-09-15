/*
 * ex.11-10.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: kgall305
 */

#include <iostream>
 //ostream=outstream�� ����
using namespace std;

class cpoint{
private:
	int x, y;

public:
	cpoint (int a=0, int b=0) : x(a), y(b) {}
	void print() { cout << "(" << x << "," << y << ")" << endl; }
	friend ostream &operator<<(ostream &out, const cpoint &po);
};

ostream &operator << (ostream &out, const cpoint &po)
//��ü��ü�� ���ϵǾ� cout~")"�� �پ ��µȴ�, ������ ���ٿ����ϱ� cont ostrema &out�ϸ� �ȵ�
{
	out << "(" << po.x << "," << po.y << ")";
	return out;
}

int main(void)
{
	cpoint p1(3,4);
	cout << p1 << endl;

	return 0;
}

