#include <stdio.h>

int main (void)
{
	int i; //int�� ����i ����
	char string1[20] = "Dream come true!", string2[20], *ptr1, *ptr2; // �迭, ������ ����

	ptr1 = string1; //string 1�̶�� �迭�� ù��° ��� �ּҰ��� ptr1 ������ ����
	printf("\n string1�� �ּ� = %p \t ptr1 = %p", string1, ptr1);//�ּ� ��°�
	printf("\n string 1 = %s \n ptr1 = %s", string1, ptr1);//ù��° ��� �ּҰ��� �ҷ���(����: ��ǥ�������)
	printf("\n\n %s", ptr1 + 7);//ptr1�� 7��° �ּҰ� ��� ���� (200���� +7*1, int���� *4)
	ptr2 = &string1[7];//string1�� 7��° ��� �ּҰ�
	printf("\n %s \n\n", ptr2);

	for(i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i)); //�ѹ��ڸ� ����.
		//putchar(ptr1[i]);
	}

	for (i = 0; *(ptr1 + i)/* = ptr1[i]*/; i++)
	{
		string2[i] = *(ptr1 + i); //null ĳ���Ͱ� ���� �ȵ�
	}

	string2[i] = *(ptr1 + i);//null ĳ���� �����

	printf("\n\n string1 = %s", string1);
	printf("\n\n string2 = %s", string2);


	ptr1[0] = 'P';
	ptr1[1] = 'e';
	ptr1[2] = 'a';
	ptr1[3] = 'c';
	ptr1[4] = 'e';
	ptr1[5] = '\0';
	printf("\n\n string1 = %s", string1);


	*ptr1 = 'P';
	*(ptr1 +1) = 'e';
	*(ptr1 +2) = 'a';
	*(ptr1 +3) = 'c';
	*(ptr1 +4) = 'e';
	*(ptr1 +5) = '\0';
	printf("\n\n string1 = %s", string1);


}
