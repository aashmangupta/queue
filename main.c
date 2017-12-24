#include <stdio.h>
#include "queue.c"

int main() {
    QUEUE* queue1 = newQUEUE();
    enqueue(queue1, 5);
    enqueue(queue1, 6);
    enqueue(queue1, 7);
    enqueue(queue1, 8);
    enqueue(queue1, 9);

    for(int i = 0; i < 5; i++) {
        printf("%d ", queue1->arr[i]);
    }
    printf("\n%d\n", queue1->size);
    return 0;
}