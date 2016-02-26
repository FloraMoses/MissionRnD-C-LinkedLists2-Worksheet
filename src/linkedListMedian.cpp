/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head == NULL) {
		return -1;
	}
	struct node *temp1 = head;
	int count = 0;
	while (temp1 != NULL) {
		count++;
		temp1 = temp1->next;
	}
	int count1 = 0;
	struct node *temp
		= head;
	if (count % 2 != 0) {
		count /= 2;
		while (temp != NULL) {
			if (count == count1) {
				return temp->num;
				break;
			}
			count1++;
			temp = temp->next;
		}
	}
	else {
		count /= 2;
		while (temp != NULL) {
			count1++;
			if (count == count1) {
				return ((temp->num) + (temp->next->num)) / 2;
			}
			temp = temp->next;
		}
	}
}
