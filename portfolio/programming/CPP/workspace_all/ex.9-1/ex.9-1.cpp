/*
 * ex.9-1.cpp
 *
 *  Created on: 2018. 10. 31.
 *      Author: kgall305
 */

#include <iostream>

using namespace std;

class Date
{
private:
	int x,y,z;

public:
	Date(int x, int y, int z){
		x = year;
		y = month;
		z = day;
	}

	birth, independenceDay();

	int getYear() {return year};
	int getMonth() {return month};
	int getDay() {return day};
	void print()
	{
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}

};

int main(void)
{
	Date birth(2014,3,20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
