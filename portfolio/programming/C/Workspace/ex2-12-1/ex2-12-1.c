#include <stdio.h>

struct employee{ 			//�����Լ��� "����"�ؾ� �ٸ� �Լ������� ��밡����
			char *name; //������ �޸� �Ҵ��� �ȵ�. ���Ǵ� �޸��Ҵ��
			int year;
			int pay;
};

int main (void)
{
	struct employee Lee;
	Lee.name = "Ann"; //���ڿ� ����̱⶧���� �迭�� �ƴ� �����Ϳ� �־����
	Lee.year =2015;
	Lee.pay = 4200;

	return 0;
}
/*
char *name;
strcpy (name, "ann");

1. ������ ������ ����.
2. ������ ����. ���ִ� �ּҿ� ���� �޶����Ե�. �Ҵ�������� �ּҶ�
*/

