#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ary[2][3];
	int i, j;
	int seq = 0;

	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			seq++;
			ary[i][j]=seq;
		}
	}
	for(i=0; i<2; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d", ary[i][j]);
			}
			printf("\n");
		}



}
