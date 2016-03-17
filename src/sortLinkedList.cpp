/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	else
	{
		struct node *nextnodeptr;
		struct node *currentnodeptr = head;
		int temp;

		while (currentnodeptr->next != NULL)
		{
			nextnodeptr = currentnodeptr->next;

			while (nextnodeptr != NULL)
			{
				if (currentnodeptr->num > nextnodeptr->num)
				{
					temp = currentnodeptr->num;
					currentnodeptr->num = nextnodeptr->num;
					nextnodeptr->num = temp;
				}
				nextnodeptr = nextnodeptr->next;
			}
			currentnodeptr = currentnodeptr->next;
		}

		return head;
	}
}