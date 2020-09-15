/*
 * ex.13-14.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: kgall305
 */

#include <iostream>
#define pi 3.14
using namespace std;

class Cshape {
public:
	int x,y;
	double radius;

public:
	Cshape(int a, int b) : x(a), y(b){}
	void move (int a, int b) { x+=a; y+=b; }
	void printxy () { cout << "(" << x << "," << y << ")" << endl;}
};
//순수가상함수->객체못만듬,
class Ccircle: public Cshape{
public:
	int radius;

public:
	Ccircle(int a, int b, double r) : Cshape(a,b) radius(r) {}
	double getarea () { return (pi * radius * radius); }

class Crect: public Cshape{
	public:
		int garo,sero;

	public:
		Crect(int a, int b, double r) : Cshape(a,b) radius(r) {}
		double getarea () { return (return (garo * sero); }

};
void printarea(Ccircle &cir)
{
	cout << "면적 : " << cir.getarea() << endl;
}

int main(void)
{
	Ccircle cir (1,1,1);
	Crect rect(1,1,2,3);

	cir.printxy();
	cir.move(1,2);
	cir.printxy();
	cout << cir.getarea () << endl;

	rect.printxy();
	rect.move(1,2);
	rect.printxy();
	rect.getarea();
	cout << rect.getarea() << endl;

	return 0;
}
