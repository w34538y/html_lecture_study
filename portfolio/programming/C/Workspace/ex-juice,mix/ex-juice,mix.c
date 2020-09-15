#include <stdio.h> //배열 m에 juice b에 cock 저장 하고 swap(함수 쓰는거아님):포인터 표현식으로 swap, strcpy 사용
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
