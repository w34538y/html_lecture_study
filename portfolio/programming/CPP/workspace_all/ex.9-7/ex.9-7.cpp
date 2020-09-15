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
	int GetSize() {return count;}; //객체는 자동반납이 됨(스택에 생성) 배열은 heep에서 생성
	int &GetElement( int index ) { return pAry[index]; } //변수자체를 리턴, index번째 공간자체를 리턴
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

	for(int i = 0; i<Ary.GetSize(); i++) //배열크기
		Ary.GetElement(i) = i + 1; //i번째 기억공간리턴

	Ary.print();
}


