/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	
	int Count0 = 0, Count1 = 0, Count2 = 0;
	struct node *currentnodeptr;
	currentnodeptr = head;
	while (currentnodeptr != NULL)    
	{
		if (currentnodeptr->data == 0)
			Count0++;
		else if (currentnodeptr->data == 1)
			Count1++;
		else
			Count2++;
		currentnodeptr = currentnodeptr->next;
	}
	currentnodeptr = head;
	
	while (currentnodeptr != NULL)
	{
		if (Count0 != 0)
		{
			currentnodeptr->data = 0;
			Count0--;
		}
		else if (Count1 != 0)
		{
			currentnodeptr->data = 1;
			Count1--;
		}
		else
		{
			currentnodeptr->data = 2;
			Count2--;
		}
		currentnodeptr = currentnodeptr->next;
	}
}