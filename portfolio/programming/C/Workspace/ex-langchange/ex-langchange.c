// 문자열을 입력받아서 영어 소문자를 입력받으면 대문자로 교체해서 출력. 아니면 그대로 출력
// 아스키 코드는 소문자는 대문자+32 대문자는 소문자-32
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[1024];
	int len, i;

	printf("문자열을 입력하세요: ");
	fflush(stdout);
	fgets(str, sizeof(str), stdin);
	len=strlen(str);

	for(i=0; i<len; i++)
	{
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}

	}

	puts(str);
	return 0;

}
