#include <stdio.h>

int main(void)
{
	char str[10];
	int i;

	printf("문자열을 입력하세요: ");
	fflush(stdout);
	scanf("%s", str);

	for(i=0; str[i]; i++)
	{
		;
	}

	printf("입력된 문자열은\n\"%s\"\n입니다. \n", str);
	printf("입력된 문자열의 길이= %d", i);


}
