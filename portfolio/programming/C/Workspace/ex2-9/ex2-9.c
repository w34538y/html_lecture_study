#include <stdio.h>

int main (void)
{
	int i; //int형 변수i 정의
	char string1[20] = "Dream come true!", string2[20], *ptr1, *ptr2; // 배열, 포인터 정의

	ptr1 = string1; //string 1이라는 배열의 첫번째 요소 주소값을 ptr1 공간에 저장
	printf("\n string1의 주소 = %p \t ptr1 = %p", string1, ptr1);//주소 찍는거
	printf("\n string 1 = %s \n ptr1 = %s", string1, ptr1);//첫번째 요소 주소값을 불러옴(이유: 수표얘기참고)
	printf("\n\n %s", ptr1 + 7);//ptr1의 7번째 주소값 계산 산출 (200번지 +7*1, int형은 *4)
	ptr2 = &string1[7];//string1의 7번째 요소 주소값
	printf("\n %s \n\n", ptr2);

	for(i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i)); //한문자를 찍음.
		//putchar(ptr1[i]);
	}

	for (i = 0; *(ptr1 + i)/* = ptr1[i]*/; i++)
	{
		string2[i] = *(ptr1 + i); //null 캐릭터가 복사 안됨
	}

	string2[i] = *(ptr1 + i);//null 캐릭터 복사됨

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
