#include <stdio.h>
#include <stdlib.h>
#include "arrayqueue.h"


void main(){
	printf("\n");
	queue qu;
	queue *q = &qu;
	initQueue(4,q);
	printQueue(q);
	push(1,q);
	push(2,q);
	push(3,q);
	printQueue(q);
	push(4,q);
	printInOrder(q);

	push(5,q);
	push(6,q);
	push(7,q);
	push(8,q);
	printQueue(q);
	printInOrder(q);

}