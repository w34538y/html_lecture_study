#include <stdio.h>

struct employee{ 			//�����Լ��� "����"�ؾ� �ٸ� �Լ������� ��밡����
			char name[10]; //������ �޸� �Ҵ��� �ȵ�. ���Ǵ� �޸��Ҵ��
			int year;
			int pay;
};

int main (void)
{
	int i; //�����Լ�

	struct employee lee[4]={
			{"����ȣ", 2014, 4200},
			{"���ѿ�", 2015, 3300},
			{"�̻��", 2015, 2500},
			{"�̻��", 2016, 2900},
	};

	for(i=0; i<4; i++)
	{
		printf("�̸�: %s \n", lee[i].name);
		printf("�Ի�: %d \n", lee[i].year);
		printf("����: %d\n\n", lee[i].pay);
	}

}
