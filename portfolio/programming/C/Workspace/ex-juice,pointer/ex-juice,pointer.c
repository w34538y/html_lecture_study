#include <stdio.h> //m에 juice b에 cock 저장 하고 swap(함수 쓰는거아님):포인터 표현식만 사용, strcpy 사용
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
