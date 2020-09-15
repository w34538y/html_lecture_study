#include <stdio.h>

int main (void)
{
	char str[]= "Data Structure!";
	int i;

	printf("문자 배열 str[] : ");

	for(i=0; str[i]; i++) //데이터 유연성을 위해서
	{
		printf("%c", str[i]);
	}

	return 0;

}
