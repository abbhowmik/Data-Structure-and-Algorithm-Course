#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
// pushing element in the queue
void enqueue(struct circularQueue *q, int data)
{
    if (isFull(q))
    {
        printf("CircularQueue Overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = data;
        printf("Enqueued Element is %d\n", data);
    }
}
int dequeue(struct circularQueue *q)
{
    int data = 0;
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f++;
        data = q->arr[q->f];
    }
    return data;
}
int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 4);
    enqueue(&q, 67);
    enqueue(&q, 80);
    // enqueue(&q, 334);

    printf("\n");

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q, 100);
    enqueue(&q, 100);
    enqueue(&q, 100);
    // enqueue(&q, 100);
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