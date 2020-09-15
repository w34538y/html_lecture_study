#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {	// 스택의 노드를 구조체로 정의
	int    data;
	struct stackNode *link;
} stackNode;

stackNode* top;				// 스택의 top 노드를 지정하기 위해 포인터 top 선언

//// 스택의 top에 원소를 삽입하는 연산
//void push(int item);
//
//// 스택의 top에서 원소를 삭제하는 연산
//int pop();
//
//// 스택의 원소를 top에서 bottom 순서로 출력하는 연산
//void printStack();

int main(void) {
//	int item;
//	top = NULL;
//	printf("\n** 연결 스택 연산 **\n");
//	printStack();
//	push(1);    printStack();		// 1 삽입
//	push(2);    printStack();		// 2 삽입
//	push(3);	printStack();		// 3 삽입
//
//	item = pop();  printStack();	// 삭제
//	printf("\t pop  => %d", item);
//	item = pop();  printStack();	// 삭제
//	printf("\t pop  => %d", item);
//	item = pop();  printStack();	// 삭제
//	printf("\t pop  => %d", item);

	return 0;
}
