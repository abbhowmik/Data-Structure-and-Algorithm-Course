// Queue follows the FIFO(first in first out) rules
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

// lets push the element into the queue
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueued element is: %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // printf("Queue has been created\n");
    enqueue(&q, 4);
    enqueue(&q, 67);
    enqueue(&q, 100);
    enqueue(&q, 10);
    // enqueue(&q, 334);

    printf("\n");

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    // enqueue(&q, 6); // can't be enqueued, as this is a linear linked list, it is possible only in circular linked list
    // printf("Dequeuing element %d\n", dequeue(&q));

    if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    return 0;
}

// is as same

// int main()
// {
//     struct queue *q = (struct queue *)malloc(sizeof(struct queue));
//     q->size = 20;
//     q->f = q->r = 0;
//     q->arr = (int *)malloc(q->size * sizeof(int));
//     printf("Queue has been created\n");
//     enqueue(q, 4);
//     enqueue(q, 67);
//     enqueue(q, 100);
//     enqueue(q, 334);
//     enqueue(q, 24);
//     printf("\n");
//     printf("Dequeuing element %d\n", dequeue(q));
//     printf("Dequeuing element %d\n", dequeue(q));
//     printf("Dequeuing element %d\n", dequeue(q));
//     if (isFull(q))
//     {
//         printf("Queue is Full\n");
//     }
//     if (isEmpty(q))
//     {
//         printf("Queue is Empty\n");
//     }
//     return 0;
// }