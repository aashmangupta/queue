#include <stdio.h>
#include "queue.c"

int main() {
    QUEUE* queue1 = newQUEUE();
    enqueue(queue1, 5);
    enqueue(queue1, 6);
    peekQUEUE(queue1);
    printQUEUE(queue1);
    dequeue(queue1);
    dequeue(queue1);
    enqueue(queue1, 7);
    enqueue(queue1, 8);
    enqueue(queue1, 9);
    printQUEUE(queue1);
    dequeue(queue1);
    dequeue(queue1);
    printQUEUE(queue1);

    return 0;
}