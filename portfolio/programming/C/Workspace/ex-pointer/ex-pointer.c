#include <stdio.h>

int main(void)
{
	char ch[3] = "12"; //ch라는 3개짜리 배열을 만들고 12라는 문자열을 저장
	char *ptr; //ptr은 포인터

	ptr = "korea"; //문자열 상수의 시작주소를 ptr에 저장
// *ptr = 'a'; a라는 문자값을 ptr이 가리키는 공간에 저장 (문자열 상수에 넣으려해서 에러남)

	printf("%s\n", ptr); //ptr 주소로 가서 저장된 값 출력
	printf("%s\n", ch); //ch  배열 출력
	ptr = ch; // ch 배열의 첫번째 요소 주소값을 ptr에 저장
   *ptr = 'a'; //a를 ptr이 가리키는 공간 첫주소에 저장
	ptr[1] = 'b'; //b라는 문자값을 ptr의 1번째 공간에 저장, 배열의 주소를 이용해서 ptr을 배열처럼 사용

	printf("%s", ch); // 직접 접근 방식.  ptr로 하면 간접 접근이 됨

	return 0;
}


// *(ptr + 0) == ptr[0]
// *(ptr + 2) == ptr[2]
