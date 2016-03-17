/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	
	int l = K;
	struct node* currentnodeptr=NULL;
	struct node* previousnodeptr=NULL;
	struct node* temp = NULL;
	previousnodeptr = head;
	currentnodeptr = head;
	if (head == NULL)
		return NULL;
	
	else if (K <= 1)
		return NULL;
	else
	{

		while (currentnodeptr!= NULL)
		{
			
			if (l==1)
			{
				previousnodeptr->next = currentnodeptr->next;
				temp = currentnodeptr;
				currentnodeptr = currentnodeptr->next;
				free(temp);
				l = K;
				
			}
			else
			{
				previousnodeptr = currentnodeptr;
				currentnodeptr = currentnodeptr->next;
				l--;
			}
		}

		return head;
	}
}