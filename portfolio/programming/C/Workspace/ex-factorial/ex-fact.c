#include <stdio.h>

int factfor(int n);

int main (void)
{
	int n;
	int result;

	printf("������ �Է��ϼ��� : ");
	fflush(stdout);
	scanf("%d", &n);
	result = factfor(n);

	printf("\n \n %d�� ���丮�� ���� %d�Դϴ�.\n", n, result);

}

int factfor(int n)
{
	int value = 1;

	for (;n>0; n--)
		value *=n;
	return value;



}
