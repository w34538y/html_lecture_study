#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

	char input[1024]; //�Է¹������� ������ �迭 �ϳ������� �־����
	char *name;
	char *addr;

	printf("�̸��� �Է��ϼ���: ");
	fflush(stdout);
	fgets(input, sizeof(input), stdin);
	input[strlen(input)-2]='\0'; //fgets���� ����ģ�ű��� �Է��� �Ǳ⶧���� ���� 2����Ʈ �������� Null char�� �ִ°�

	name=(char*)malloc(strlen(input)+1);
	if(name==NULL)
	{
		printf("�޸𸮰� �����մϴ�.");
		exit(1);
	}
	strcpy(name, input);
	printf("�̸�: %s \n", name);

	printf("�ּҸ� �Է��ϼ���: ");
	fflush(stdout);
	fgets(input, sizeof(input), stdin);
	input[strlen(input)-2]='\0';


	addr=(char*)malloc(strlen(input)+1);
	if(addr==NULL)
	{
		printf("�޸𸮰� �����մϴ�.");
		exit(1);
	}

	strcpy(addr, input);
	printf("�ּ�: %s \n", addr);

	free(name);
	free(addr);

	return 0;
}
