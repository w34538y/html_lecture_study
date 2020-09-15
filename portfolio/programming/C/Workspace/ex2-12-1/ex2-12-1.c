#include <stdio.h>

struct employee{ 			//전역함수로 "선언"해야 다른 함수에서도 사용가능함
			char *name; //선언은 메모리 할당이 안됨. 정의는 메모리할당됨
			int year;
			int pay;
};

int main (void)
{
	struct employee Lee;
	Lee.name = "Ann"; //문자열 상수이기때문에 배열이 아닌 포인터에 넣어야함
	Lee.year =2015;
	Lee.pay = 4200;

	return 0;
}
/*
char *name;
strcpy (name, "ann");

1. 문법상 에러는 없음.
2. 실행은 랜덤. 들어가있는 주소에 따라 달라지게됨. 할당되지않은 주소라서
*/

