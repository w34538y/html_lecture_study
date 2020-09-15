/*
 * ex.8-4.cpp
 *
 *  Created on: 2018. 10. 30.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class cpoint
{
private:
	int x;
	int y;

public: //멤버함수
	cpoint(int a, int b) {x = a; y = b;} // cpoint:자기소속class이름과 같다 리턴형이 없음->생성자
	//a,b는 매개변수 xy-객체
	void print() {cout << "(" << x << "," << y << ")" << endl; }
};

int main(void)
{
	cpoint p1(1,2); //객체이름:p1, class의 생성자가 호출, = cpoint p1=cpoint(1,2);
	cpoint p2 = cpoint(3,4); // 객체2개p1,p2(main함수에서 태어나서 stack영역에 공간이 생성 heep=malloc or new, data영역은 static)

	p1.print();
	p2.print();

	return 0;
}

//p.4 오렌지박스 cpointp1;(올바른표현)디폴트생성자호출
//cpoint();(틀린표현)->함수선언문이 되기때문    따라서,중요
