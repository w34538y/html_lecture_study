/*
 * ex.7-99-����.cpp
 *
 *  Created on: 2018. 10. 29.
 *      Author: kgall305
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class person
{
	string name;
	string tel;
public:
	person();
	string getname() { return name; }
	string gettel() { return tel; }
	void set(string n, string t)
	{
		//set-name tel���� �ִ� ���
		name = n;
		tel = t;
	}
};

int main(void)
{
	person *p = new person[3];
	string name, tel;
	int i;

	if( p == NULL )
	{
		cout <<"�޸𸮰� �����մϴ�." << endl;
		exit(1);
	}

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for(i=0; i<3; i++)
	{
		cout << "���" << i+1 << ">>";
		cin >> name >> tel;
		p[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for(i=0; i<3; i++)
	{
		cout << p[i].getname() << '';
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���. >>";
	cin >> name;
	for(i=0; i<3; i++)
	{
		if(name == p[i].getname()) {
			break;
		}
	}

	if(i<3)
		cout<<"��ȭ ��ȣ�� " << p[i].gettel() << endl;
	else
		cout<<"���� ����Դϴ�. " << endl;

	delete [] p;

	return 0;
}

//set�Լ�:����(3����:����,leftvalue,rightvalue)ĸ��ȭ�Ǿ��ֱ⶧�� �����Լ��� ���ٰ���
