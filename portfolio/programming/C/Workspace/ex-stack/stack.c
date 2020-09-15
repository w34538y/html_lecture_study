#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {	// ������ ��带 ����ü�� ����
	int    data;
	struct stackNode *link;
} stackNode;

stackNode* top;				// ������ top ��带 �����ϱ� ���� ������ top ����

// ������ top�� ���Ҹ� �����ϴ� ����
void push(int item){
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	if(temp == NULL)
	{
		printf("memory fail");
		exit(1);
	}

	temp->data = item;
	temp->link = top;
	top = temp;
}

// ������ top���� ���Ҹ� �����ϴ� ����
int pop(){
	int item;
	stackNode* temp = top;
	if(top == NULL){
		printf("\n ������ �����. \n");
		return 0;

	}
	else{
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

// ������ ���Ҹ� top���� bottom ������ ����ϴ� ����
void printStack(){
	stackNode *p = top;
	printf("\n stack [ ");
		while (p) {
			printf("%d ", p->data);
			p = p->link;

		}
		printf("] ");

}


int main(void) {
	int item;
	top = NULL;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push(1);    printStack();		// 1 ����
	push(2);    printStack();		// 2 ����
	push(3);	printStack();		// 3 ����

	item = pop();  	printStack();	// ����
	printf("\t pop  => %d", item);
	item = pop();  printStack();	// ����
	printf("\t pop  => %d", item);
	item = pop();  printStack();	// ����
	printf("\t pop  => %d", item);

	return 0;
}
