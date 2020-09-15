#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

// ����Ʈ�� ����
listNode* L; //������

// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList() {
	listNode* p;
	listNode* cur = L;

	while (cur != NULL) {
		p = cur;
		cur = cur->link;
		free(p);
	}

	L = NULL;
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList() {
	listNode* cur = L;

	printf("L = (");
	while (cur != NULL) {
		printf("%s", cur->data);
		cur = cur->link;
		if (cur != NULL)
			printf(", ");
	}
	printf(") \n");
}

// ù ��° ���� �����ϴ� ����
void insertFirstNode(char *x) {
	listNode *New = (listNode *)malloc(sizeof(listNode));
	if(New == NULL)
	{
		printf("fail");
		exit(1);

	}
	strcpy(New -> data, x); //���ڿ��� �����Ҷ� strcpy�̿�!!!
	New -> link=L;
	L = New; //L�� New �Ѱ��ָ鼭 ù��°����

}
void insertLastNode(char *x) {
	listNode *New = (listNode *)malloc(sizeof(listNode));
	if(New == NULL)
	{
		printf("fail");
		exit(1);
	}
	listNode *temp ;

	strcpy(New -> data, x);
	New -> link = NULL;

	if(L == NULL){
		New = L;
		return;
		}
	temp = L;


	while (temp -> link != NULL){
		temp = temp -> link;
		}
	temp -> link = New;
}

listNode* SearchNode(char *x) {
	listNode *temp ;
	temp = L;

	while (temp != NULL)
	{
		if(strcmp(temp->data, x)==0)
			return temp;
		else
			temp = temp -> link;
	}

	return temp;
}
void insertMiddleNode(listNode* pre, char *x){
	listNode *New = (listNode *)malloc(sizeof(listNode));
		if(New == NULL)
		{
			printf("fail");
			exit(1);
		}

	strcpy(New -> data, x);

	if(L == NULL){ //���鸮��Ʈ�ΰ��
		New -> link = NULL; //�� ��带 ù��°���� ������ ���� ����
		L = New;
	}
	else if(pre ==NULL){
		New->link = L; //���� ��ġ�� �����ϴ� ������ pre�� NULL�� ���
		L = New; //�� ��带 ù��° ���� ����
	}
	else
		New->link = pre->link; //������ pre�� ��� �ڿ� �� ��� ����
		pre->link = New;

}

void deleteNode(listNode *pre, char*x){
	listNode *old;
	if(L == NULL){
		exit(1);
	}
	else{
		old = pre->link;
		if(old == NULL){
			return;
		}
		pre->link = old->link;
		return ;
	}
	free(old);
}

int main() {
	listNode *p;
	L= NULL;
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	L = NULL;
	printList();

	printf("(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode("��");
	printList();

	printf("(3) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertFirstNode("��");
	printList();

	printf("(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertLastNode("��");
	printList();

	printf("(5) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertLastNode("��");
	printList();

	printf("(6) ����Ʈ���� [��] ��� ã��! \n");
	p=SearchNode("��");
	if( p == NULL)
		printf("ã�� �����Ͱ� �����ϴ�");
	else
		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("(7) ����Ʈ���� [��] ��� ã��! \n");
	p=SearchNode("��");
	if( p == NULL)
		printf("ã�� �����Ͱ� �����ϴ�");
	else
		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("(8) ����Ʈ���� [��]�ڿ� [��] ��� ����! \n");
	insertMiddleNode(p, "��");
	printList();

	printf("(9) ����Ʈ���� [��]�ڿ� [ȭ] ��� ����! \n");
	p=SearchNode("��");
	insertMiddleNode(p, "ȭ");
	printList();

	printf("(10) ����Ʈ���� [��] ��� ����! \n");
	p=SearchNode("��");
	deleteNode("��");
	printList();


	printf("(10) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����! \n");
	freeLinkedList();
	printList();

	return 0;
}
