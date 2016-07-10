#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

typedef struct list
{
	int* head;
}List;

typedef struct node
{
	int data;
	int* next;
}Node;

int printNode(List* list)
{
	Node* curNode;

	if (list == NULL)
	{
		return;
	}

	curNode = list->head;

	while (curNode != NULL)
	{
		printf("%d,%p", curNode->data, curNode->next);

		curNode = curNode->next;
		printf(",%d\n", curNode->data);
		if (curNode->next != NULL)
			printf("¾øÀ½\n");
			
	}

}

int main(void)
{
	List* list = (List*)malloc(sizeof(List));
	Node* node1 = (Node*)malloc(sizeof(Node));
	Node* node2 = (Node*)malloc(sizeof(Node));
	Node* node3 = (Node*)malloc(sizeof(Node));
	Node* node4 = (Node*)malloc(sizeof(Node));
	Node* node5 = (Node*)malloc(sizeof(Node));
	Node* node6 = (Node*)malloc(sizeof(Node));

	list->head = node1;
	node1->data = 10;
	node1->next = node2;
	node2->data = 20;
	node2->next = node3;
	node3->data = 30;
	node3->next = node4;
	node4->data = 40;
	node4->next = node5;
	node5->data = 50;
	node5->next = node6;
	node6->data = 100;
	node6->next = NULL;

	printNode(list);

	return 0;
}