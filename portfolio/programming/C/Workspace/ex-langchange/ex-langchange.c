// ���ڿ��� �Է¹޾Ƽ� ���� �ҹ��ڸ� �Է¹����� �빮�ڷ� ��ü�ؼ� ���. �ƴϸ� �״�� ���
// �ƽ�Ű �ڵ�� �ҹ��ڴ� �빮��+32 �빮�ڴ� �ҹ���-32
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[1024];
	int len, i;

	printf("���ڿ��� �Է��ϼ���: ");
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
