#include <stdio.h> //m�� juice b�� cock ���� �ϰ� swap(�Լ� ���°žƴ�):������ ǥ���ĸ� ���, strcpy ���
#include <string.h>

int main(void)
{

	char *ptr1 = "juice";
	char *ptr2 = "cock";
	char *ptmp;

	printf(" before: m: %s b: %s \n", ptr1,ptr2);

	ptmp = ptr1;
	ptr1= ptr2;
	ptr2= ptmp;
	printf(" swap: m: %s b: %s", ptr1, ptr2);




}
