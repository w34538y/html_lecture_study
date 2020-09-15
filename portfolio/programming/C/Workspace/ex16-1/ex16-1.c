#include <stdio.h>
#include <stdlib.h> 						//malloc 사용을 위한 헤더파일

int main(void)
{
	int *pi;
	double *pd;							  //동적 할당 영역을 연결할 포인터 선언

	pi = (int *)malloc(sizeof(int));	//메모리 동적 할당 후 포인터 연결
	if(pi ==NULL)						//동적 할당에 실패하면 NULL 포인터 반환
	{
		printf(" 메모리가 부족합니다. \n");	//예외 상황 메세지 출력
		exit(1);						//프로그램 종료
	}

	pd = (double *)malloc(sizeof(double));

	if (pd == NULL)
	{
		printf(" 메모리가 부족합니다. \n");
		exit(1);
	}
	*pi =10;							//포인터로 동적 할당 영역 사용
	*pd =3.4;

	printf("정수형으로 사용: %d\n", *pi);	//동적 할당 영역에 저장된 값 출력
	printf("실수형으로 사용: %lf\n", *pd);

	free(pi);							//동적 할당 영역 반환
	free(pd);

	return 0;


}
