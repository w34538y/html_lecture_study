#include <stdio.h> //�迭m�� juice b�� cock ���� �ϰ� swap(�Լ� ���°žƴ�):�迭 ǥ���ĸ� ���, strcpy ���
#include <string.h>

int main(void)
{
	char m[10]="juice";
	char b[10]="cock";
	char tmp[10];

	printf(" before: m: %s b: %s \n", m,b);

	strcpy(tmp, m);
	strcpy(m, b);
	strcpy(b, tmp);
	printf(" swap: m: %s b: %s", m,b);




}
