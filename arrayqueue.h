
typedef struct{
        int *items;
        int head;
        int tail;
        int count;
        int size;
    }queue;


void push(int x, queue *q);
int pop(queue *q);
int isFull(queue *q);
int isEmpty(queue *q);
void printQueue(queue *q);
void printInOrder(queue *q);
void initQueue(int size,queue *q);