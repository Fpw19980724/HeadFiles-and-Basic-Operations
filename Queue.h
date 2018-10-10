#ifndef Queue_h
#define Queue_h
typedef enum{TRUE,FALSE}bool;
#define CAPACITY 100
typedef int ElemType;

typedef struct
{
    int front;
    int rear;
    int size;
    ElemType data[CAPACITY];
}Queue;

Queue* initQueue();
ElemType dQueue(Queue *q);
bool enQueue(Queue *q , ElemType data);



#endif /* Queue_h */
