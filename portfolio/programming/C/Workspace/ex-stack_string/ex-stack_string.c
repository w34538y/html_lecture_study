#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stackNode {	// 스택의 노드를 구조체로 정의
	char    *data;
	struct stackNode* link;
} stackNode;

stackNode* top;				// 스택의 top 노드를 지정하기 위해 포인터 top 선언

// 스택의 top에 원소를 삽입하는 연산
void push(char *item){
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	if(temp == NULL)
	{
		printf("memory fail");
		exit(1);
	}
	temp->data =(char *)malloc(strlen(item)+1);
	if(temp->data == NULL)
		{
			printf("memory fail");
			exit(1);
		}

	temp->link = top;
	top = temp;
}

// 스택의 top에서 원소를 삭제하는 연산
char* pop(){
	char *data;
	stackNode* temp = top;


	if(top == NULL){
		printf("\n 스택이 비었음. \n");
	}
	else{
		data =(char*)malloc(strlen(temp->data)+1);
		strcpy(data, temp->data);
		top = temp->link;
		free(temp);
		free(data);

	}
	return data;
}

// 스택의 원소를 top에서 bottom 순서로 출력하는 연산
void printStack(){
	stackNode *p = top;
	printf("\n stack [ ");
		while (p != NULL) {
			printf("%s ", p->data);
			p = p->link;

		}
		printf("] ");


}


int main(void) {
	char *item;
	top = NULL;
	printf("\n** 연결 스택 연산 **\n");
	printStack();
	push("hong");    printStack();		// 1 삽입
	push("kim");    printStack();		// 2 삽입
	push("lee");	printStack();		// 3 삽입

	item = pop();  	printStack();	// 삭제
	printf("\t pop  => %s", item);
	item = pop();  printStack();	// 삭제
	printf("\t pop  => %s", item);
	item = pop();  printStack();	// 삭제
	printf("\t pop  => %s", item);


	return 0;
}
