#include <stdio.h>

int fact(int n);

int main (void)
{
	int i,n;
	int result;
	printf("������ �Է��ϼ��� : ");
	fflush(stdout);
	scanf("%d", &n);

	result = fact(n);



	printf("\n \n %d�� ���丮�� ���� %d�Դϴ�.\n", n, result);

}

int fact(int n)
{
	int res;
	printf("fact(%d) �Լ� ȣ�� \n", n);
	if (n<=1)
		return(1);
	res = n*fact(n-1);

	printf("fact(%d) �� %d ��ȯ \n", n, res);


	return res;
}
