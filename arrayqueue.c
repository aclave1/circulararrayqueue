#include "arrayqueue.h"
#include "stdlib.h"
#include "stdio.h"


void push(int x, queue *q){
	if(q->count < q->size){
		q->count++;
	}
	if(q->tail == (q->size - 1)){
		q->items[q->tail] = x;
		q->tail = 0;
	}else if(q->head == (q->size - 1) ){
		q->items[q->tail] = x;
		q->head = 0;
		q->tail++;
	}
	else{
		q->items[q->tail] = x;
		q->tail++;
	}
}

int pop(queue *q){
	if( q->count > 0){
		int x = q->items[q->head];
		q->items[q->head] = 0;
		if(q->head == (q->size -1)){
			q->head = 0;
		}
		else{
			q->head++;
		}
		q->count--;
		return x;
	}
}

int isFull(queue *q){
	return (q->count == q->size);
}
int isEmpty(queue *q){
	return (q->count == 0) ? 1 : 0;
}

/*
	Prints the contents of the queue without respect to the queue properties.
	ie: ht= = =
		0 0 0 0

		h = = t
		1 2 3 0

		ht= = =
		5 6 7 8
*/
void printQueue(queue *q){
	int i;
	for(i=0;i<q->size;i++){
		if(i == q->head && i == q->tail){
			printf("ht");
		}
		else if(i == q->head){
			printf("h ");
		}
		else if(i==q->tail){
			printf("t ");
		}
		else{
			printf("= ");
		}
	}
	printf("\n");
	for(i=0;i<q->size;i++){
		printf("%d ",q->items[i]);
	}
	printf("\n");
}
/*
	prints the queue in order.
	NOTE: this empties the queue too.
	inorder:
		5 6 7 8

*/
void printInOrder(queue *q){
	printf("inorder:\n");
	while( q->count > 0){
		printf("%d ",pop(q) );
	}
	printf("\n");
}

void initQueue(int size,queue *q){
	q->count = 0;
	q->size = size;
	q->head = 0;
	q->tail = 0;
	q->items = malloc(sizeof(int) * size);
}