/*
 * ex.9-7.cpp
 *
 *  Created on: 2018. 10. 31.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class CArray
{
private :
	int *pAry;
	int count;

public :
	CArray(int co) { count = co; pAry = new int [count]; };
	~CArray() { delete [] pAry; }
	int GetSize() {return count;}; //��ü�� �ڵ��ݳ��� ��(���ÿ� ����) �迭�� heep���� ����
	int &GetElement( int index ) { return pAry[index]; } //������ü�� ����, index��° ������ü�� ����
    void print() {
		cout << "< ";
		for( int i =0; i<count; i++ )
			cout << pAry[i] << " ";
		cout << " >" << endl;
	}

};

int main(void)
{
	CArray Ary(5);

	for(int i = 0; i<Ary.GetSize(); i++) //�迭ũ��
		Ary.GetElement(i) = i + 1; //i��° ����������

	Ary.print();
}


