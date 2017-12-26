//
// Created by Aashman Gupta on 12/22/17.
//
#include "queue.h"

struct queue{
    int frontIndex;
    int rearIndex;
    int size;
    int* arr;
    int filledIndices;  //For printing queue
};

QUEUE* newQUEUE() {
    QUEUE *items = malloc(1 * sizeof(QUEUE));
    items->frontIndex = -1;
    items->rearIndex = -1;
    items->size = 1;
    items->arr = malloc(1 * sizeof(int));
    items->filledIndices = 0;
    return items;
}

void enqueue(QUEUE* items, int val) {
    int flag = isFull(items);      //if flag == 1, then queue is full, else its not.

    if((items->frontIndex == -1) && (items->rearIndex == -1)) {
        items->frontIndex = 0;
        items->rearIndex = 0;
        items->arr[items->rearIndex] = val;
        items->filledIndices = 1;
        return;
    }

    else if(flag == 1) {
        allocateArr(items);
        items->rearIndex++;
        items->arr[items->rearIndex] = val;
        items->filledIndices++;
    }
    else {
        items->arr[(items->rearIndex + 1) % items->size] = val;
        items->rearIndex++;
        items->filledIndices++;
    }

    return;
}

void allocateArr(QUEUE* items) {
    int* temp = malloc(2 * items->size * sizeof(int));
    int tempFrontInd = items->frontIndex;

    for(int i = 0; i < items->filledIndices; i++) {
        temp[i] = items->arr[tempFrontInd];
        tempFrontInd = (tempFrontInd + 1) % items->size;
    }

    items->arr = realloc(items->arr, 2 * items->size * sizeof(int));
    items->size *= 2;

    for(int i = 0; i < items->size; i++) {
        items->arr[i] = 0;
    }

    for(int i = 0; i < items->filledIndices; i++) {
        items->arr[i] = temp[i];
        items->rearIndex = i;
    }

    items->frontIndex = 0;
    return;
}

extern void dequeue(QUEUE* items) {
    items->frontIndex = (items->frontIndex + 1) % items->size;
    items->filledIndices--;
    if(items->filledIndices == 0) {
        items->frontIndex = -1;
        items->rearIndex = -1;
    }
    return;
}

int isFull(QUEUE* items) {
    if(((items->rearIndex + 1) % items->size) == items->frontIndex) {
        return 1;
    }
    return 0;
}

void printQUEUE(QUEUE* items) {
    int temp = items->frontIndex;
    printf("\nPrinting queue starting from front to rear.\n");
    for (int i = 0; i < items->filledIndices; i++) {
        printf("%d ", items->arr[temp]);
        temp = (temp + 1) % items->size;
    }
    printf("\n");
    return;
}

extern void peekQUEUE(QUEUE* items) {
    printf("\nThe front of the queue is %d.\n\n", items->arr[items->frontIndex]);
    return;
}




