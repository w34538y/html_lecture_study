#include <stdio.h>
#include <string.h>

int main (void)
{
	char name[200];
	char addr[500];

	printf("�̸��� �Է��ϼ���: ");
	fflush(stdout);
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-2]='\0'; //fgets���� ����ģ�ű��� �Է��� �Ǳ⶧���� ���� 2����Ʈ �������� Null char�� �ִ°�
	printf("�̸�: %s \n", name);

	printf("�ּҸ� �Է��ϼ���: ");
	fflush(stdout);
	fgets(addr, sizeof(addr), stdin);
	addr[strlen(addr)-2]='\0';
	printf("�ּ�: %s ", addr);

	return 0;
}
