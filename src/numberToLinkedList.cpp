/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
};


struct node * numberToLinkedList(int N) {

	struct node* head = NULL;
	int rem;
	if (N == 0)
	{
		struct node* newnodeptr;
		newnodeptr = (struct node*)malloc(sizeof(struct node));
		newnodeptr->num = 0;
		newnodeptr->next = NULL;
		head = newnodeptr;
		return head;
	}
	else
	{


		if (N < 0)
		{
			N = (N*(-1));
		}

		while (N)
		{
			rem = N % 10;

			struct node* newnodeptr;
			newnodeptr = (struct node*)malloc(sizeof(struct node));
			newnodeptr->num = rem;
			newnodeptr->next = NULL;

			if (head == NULL)
				head = newnodeptr;
			else
			{
				newnodeptr->next = head;
				head = newnodeptr;
			}
			N = N / 10;
		}
		return head;

	}

}

