#include <stdio.h>

int main (void)
{
	int count[9];
	int num, i;

	printf("1���� 9�� ������ �Է��ϼ���:\n");
	fflush(stdout);
	scanf("%d", &num);

	for(i=0; i<9; i++)
	{
		count[i] = num * (i+1);
	}

	for(i=0; i<9; i++)
	{
		printf(" %d x %d = %d \n", num, (i+1), count[i]);
	}



	return 0;



}
