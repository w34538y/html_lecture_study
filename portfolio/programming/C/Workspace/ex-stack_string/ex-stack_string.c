#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stackNode {	// ������ ��带 ����ü�� ����
	char    *data;
	struct stackNode* link;
} stackNode;

stackNode* top;				// ������ top ��带 �����ϱ� ���� ������ top ����

// ������ top�� ���Ҹ� �����ϴ� ����
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

// ������ top���� ���Ҹ� �����ϴ� ����
char* pop(){
	char *data;
	stackNode* temp = top;


	if(top == NULL){
		printf("\n ������ �����. \n");
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

// ������ ���Ҹ� top���� bottom ������ ����ϴ� ����
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
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push("hong");    printStack();		// 1 ����
	push("kim");    printStack();		// 2 ����
	push("lee");	printStack();		// 3 ����

	item = pop();  	printStack();	// ����
	printf("\t pop  => %s", item);
	item = pop();  printStack();	// ����
	printf("\t pop  => %s", item);
	item = pop();  printStack();	// ����
	printf("\t pop  => %s", item);


	return 0;
}
