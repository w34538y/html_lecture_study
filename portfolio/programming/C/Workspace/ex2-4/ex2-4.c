#include <stdio.h>

int main (void)
{
	char str[]= "Data Structure!";
	int i;

	printf("���� �迭 str[] : ");

	for(i=0; str[i]; i++) //������ �������� ���ؼ�
	{
		printf("%c", str[i]);
	}

	return 0;

}
