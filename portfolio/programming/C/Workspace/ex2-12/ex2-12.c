#include <stdio.h>

struct employee{ 			//전역함수로 "선언"해야 다른 함수에서도 사용가능함
			char name[10]; //선언은 메모리 할당이 안됨. 정의는 메모리할당됨
			int year;
			int pay;
};

int main (void)
{
	int i; //지역함수

	struct employee lee[4]={
			{"이진호", 2014, 4200},
			{"이한영", 2015, 3300},
			{"이상원", 2015, 2500},
			{"이상범", 2016, 2900},
	};

	for(i=0; i<4; i++)
	{
		printf("이름: %s \n", lee[i].name);
		printf("입사: %d \n", lee[i].year);
		printf("연봉: %d\n\n", lee[i].pay);
	}

}
