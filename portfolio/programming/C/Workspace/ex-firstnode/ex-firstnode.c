#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

// 리스트의 시작
listNode* L; //포인터

// 연결 리스트의 전체 메모리를 해제하는 연산
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

// 연결 리스트를 순서대로 출력하는 연산
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

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(char *x) {
	listNode *New = (listNode *)malloc(sizeof(listNode));
	if(New == NULL)
	{
		printf("fail");
		exit(1);

	}
	strcpy(New -> data, x); //문자열을 복사할땐 strcpy이용!!!
	New -> link=L;
	L = New; //L에 New 넘겨주면서 첫번째가됨

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

	if(L == NULL){ //공백리스트인경우
		New -> link = NULL; //새 노드를 첫번째이자 마지막 노드로 연결
		L = New;
	}
	else if(pre ==NULL){
		New->link = L; //삽입 위치를 지정하는 포인터 pre가 NULL인 경우
		L = New; //새 노드를 첫번째 노드로 삽입
	}
	else
		New->link = pre->link; //포인터 pre의 노드 뒤에 새 노드 연결
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
	printf("(1) 공백 리스트 생성하기! \n");
	L = NULL;
	printList();

	printf("(2) 리스트에 [수] 노드 삽입하기! \n");
	insertFirstNode("수");
	printList();

	printf("(3) 리스트 첫 번째에 [월] 노드 삽입하기! \n");
	insertFirstNode("월");
	printList();

	printf("(4) 리스트 첫 번째에 [금] 노드 삽입하기! \n");
	insertLastNode("금");
	printList();

	printf("(5) 리스트 첫 번째에 [토] 노드 삽입하기! \n");
	insertLastNode("토");
	printList();

	printf("(6) 리스트에서 [목] 노드 찾기! \n");
	p=SearchNode("목");
	if( p == NULL)
		printf("찾는 데이터가 없습니다");
	else
		printf("[%s]를 찾았습니다.\n", p->data);

	printf("(7) 리스트에서 [수] 노드 찾기! \n");
	p=SearchNode("수");
	if( p == NULL)
		printf("찾는 데이터가 없습니다");
	else
		printf("[%s]를 찾았습니다.\n", p->data);

	printf("(8) 리스트에서 [수]뒤에 [목] 노드 삽입! \n");
	insertMiddleNode(p, "목");
	printList();

	printf("(9) 리스트에서 [월]뒤에 [화] 노드 삽입! \n");
	p=SearchNode("월");
	insertMiddleNode(p, "화");
	printList();

	printf("(10) 리스트에서 [수] 노드 삭제! \n");
	p=SearchNode("수");
	deleteNode("수");
	printList();


	printf("(10) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
	freeLinkedList();
	printList();

	return 0;
}
