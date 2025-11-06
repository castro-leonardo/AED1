#include <stdio.h>
#include <stdlib.h>

typedef struct queue {
    int data[1000];
    int frente, tras;
} Queue;

void inQueue(Queue *q) {
    q->frente = 0;
    q->tras = 0;
}

void enqueue(Queue *q, int x) {
    q->data[q->tras++] = x;
}

int dequeue(Queue *q) {
    if (q->frente == q->tras) return -1;
    return q->data[q->frente++];
}

////

typedef struct {
    int data[1000];
    int top;
} Stack;

void iStack(Stack *s) {
    s->top = 0;
}

void push(Stack *s, int x) {
    s->data[s->top++] = x;
}

int pop(Stack *s) {
    if (s->top == 0) return -1;
    return s->data[--s->top];
}

///// prioridade
typedef struct {
    int data[1000];
    int size;
} PQueue;

void iPQ(PQueue *pq) {
    pq->size = 0;
}

void insertPQ(PQueue *pq, int x) {
    pq->data[pq->size++] = x;
}

int removePQ(PQueue *pq) {

    if (pq->size == 0) return -1;

    int maxIndex = 0;

    for (int i = 1; i < pq->size; i++) {

        if (pq->data[i] > pq->data[maxIndex]){
            maxIndex = i;
        }


    }

    int val = pq->data[maxIndex];

    pq->data[maxIndex] = pq->data[--pq->size];

    return val;
}

////

int main() {
    int n;

    while (scanf("%i", &n) != EOF) {

        Stack s; Queue q; PQueue pq;
        iStack(&s); inQueue(&q); iPQ(&pq);

        int possibleStack = 1, possibleQueue = 1, possiblePQ = 1;

        for (int i = 0; i < n; i++) {
            int op, x;

            scanf("%i %i", &op, &x);

            if (op == 1) {

                push(&s, x);
                enqueue(&q, x);
                insertPQ(&pq, x);

            /////////////

            } else if (op == 2) {
                
                int valS = pop(&s);
                int valQ = dequeue(&q);
                int valPQ = removePQ(&pq);

                if (valS != x) possibleStack = 0;
                if (valQ != x) possibleQueue = 0;
                if (valPQ != x) possiblePQ = 0;
            }
        }


        int sum = possibleStack + possibleQueue + possiblePQ;

        //// prints

        if (sum == 0){
            printf("impossible\n");

        } else if (sum > 1) {

            printf("not sure\n");

        } else if (possibleStack){

            printf("stack\n");

        } else if (possibleQueue){
        
            printf("queue\n");

        } else {
            printf("priority queue\n");
        }
    }

    return 0;
}
