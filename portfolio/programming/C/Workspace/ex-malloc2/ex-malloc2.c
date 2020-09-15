#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

	char input[1024]; //입력받을때는 저장할 배열 하나정도는 있어야함
	char *name;
	char *addr;

	printf("이름을 입력하세요: ");
	fflush(stdout);
	fgets(input, sizeof(input), stdin);
	input[strlen(input)-2]='\0'; //fgets에서 엔터친거까지 입력이 되기때문에 엔터 2바이트 뺴버리고 Null char를 넣는것

	name=(char*)malloc(strlen(input)+1);
	if(name==NULL)
	{
		printf("메모리가 부족합니다.");
		exit(1);
	}
	strcpy(name, input);
	printf("이름: %s \n", name);

	printf("주소를 입력하세요: ");
	fflush(stdout);
	fgets(input, sizeof(input), stdin);
	input[strlen(input)-2]='\0';


	addr=(char*)malloc(strlen(input)+1);
	if(addr==NULL)
	{
		printf("메모리가 부족합니다.");
		exit(1);
	}

	strcpy(addr, input);
	printf("주소: %s \n", addr);

	free(name);
	free(addr);

	return 0;
}
