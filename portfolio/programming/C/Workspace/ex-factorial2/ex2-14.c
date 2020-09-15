#include <stdio.h>

int fact(int n);

int main (void)
{
	int i,n;
	int result;
	printf("정수를 입력하세요 : ");
	fflush(stdout);
	scanf("%d", &n);

	result = fact(n);



	printf("\n \n %d의 팩토리얼 값은 %d입니다.\n", n, result);

}

int fact(int n)
{
	int res;
	printf("fact(%d) 함수 호출 \n", n);
	if (n<=1)
		return(1);
	res = n*fact(n-1);

	printf("fact(%d) 값 %d 반환 \n", n, res);


	return res;
}
