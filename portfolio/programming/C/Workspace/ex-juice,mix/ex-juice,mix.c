#include <stdio.h> //�迭 m�� juice b�� cock ���� �ϰ� swap(�Լ� ���°žƴ�):������ ǥ�������� swap, strcpy ���
#include <string.h>

int main(void)
{

	char m[10]="juice";
	char b[10]="cock";
	char *ptr1=m;
	char *ptr2=b;
	char *ptmp;

	printf(" before: m: %s b: %s \n", ptr1,ptr2);

	ptmp = ptr1;
	ptr1= ptr2;
	ptr2= ptmp;
	printf(" swap: m: %s b: %s", ptr1, ptr2);




}
