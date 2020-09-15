#include <stdio.h>
#include <string.h>

int main (void)
{
	char name[200];
	char addr[500];

	printf("이름을 입력하세요: ");
	fflush(stdout);
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-2]='\0'; //fgets에서 엔터친거까지 입력이 되기때문에 엔터 2바이트 뺴버리고 Null char를 넣는것
	printf("이름: %s \n", name);

	printf("주소를 입력하세요: ");
	fflush(stdout);
	fgets(addr, sizeof(addr), stdin);
	addr[strlen(addr)-2]='\0';
	printf("주소: %s ", addr);

	return 0;
}
