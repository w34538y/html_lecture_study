#include <stdio.h> //배열m에 juice b에 cock 저장 하고 swap(함수 쓰는거아님):배열 표현식만 사용, strcpy 사용
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
