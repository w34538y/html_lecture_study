#include <stdio.h>
#include <string.h>

int main (void)
{
	char ymd[9] = "20180917";
	char md1[5];
	char md2[5];


	strcpy(md1, &ymd[4]);
	strcpy(md2, ymd+4);

	printf("%s\n", md1);
	printf("%s\n", md2);

}
