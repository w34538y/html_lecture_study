#include <stdio.h>

int factfor(int n);

int main (void)
{
	int n;
	int result;

	printf("정수를 입력하세요 : ");
	fflush(stdout);
	scanf("%d", &n);
	result = factfor(n);

	printf("\n \n %d의 팩토리얼 값은 %d입니다.\n", n, result);

}

int factfor(int n)
{
	int value = 1;

	for (;n>0; n--)
		value *=n;
	return value;



}
