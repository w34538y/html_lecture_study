#include <stdio.h>

int main(void)
{
	char str[10];
	int i;

	printf("���ڿ��� �Է��ϼ���: ");
	fflush(stdout);
	scanf("%s", str);

	for(i=0; str[i]; i++)
	{
		;
	}

	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�. \n", str);
	printf("�Էµ� ���ڿ��� ����= %d", i);


}
