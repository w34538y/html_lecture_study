/*
 * ex.5-1.cpp
 *
 *  Created on: 2018. 10. 19.
 *      Author: kgall305
 */

#include <istream>

using namespace std;

int main(void)
{
	int ary[5] = {1,2,3,4,5};
	int *p = ary;

	for(int i = 0; i < 5; i++)
	{
		cout << p[i] <<" ";
		cout << *(ary+1) << endl;
	}
	return 0;
}


