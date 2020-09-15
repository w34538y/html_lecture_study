/*
 * ex.8-11.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class carry
{
private:
	int *pary;
	int count;

public:
	carray(int co) {count = co; pary = new int[count]; };
	~carray() {delete [] pary;}
	int GetCount() {return count;}
	void SetValue(int index, int value) { pary[index] = value;}
	void print(){
		cout << "{";
		for(int i = 0; i<count; i++)
			cout << pary[i] << " ";
		cout << "}" << endl;
	}
};

int main(void)
{
	carray ary(5);

	for(int i=0; i< ary.GetCount(); i++)
		ary.SetValue(i,i+1);

	ary.print();

	return 0;
}




