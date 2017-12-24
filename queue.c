//
// Created by Aashman Gupta on 12/22/17.
//
#include "queue.h"

struct queue{
    int frontIndex;
    int backIndex;
    int size;
    int filledIndices;
    int* arr;
};

QUEUE* newQUEUE() {
    QUEUE *items = malloc(1 * sizeof(QUEUE));
    items->frontIndex = 0;
    items->backIndex = -1;
    items->size = 1;
    items->arr = malloc(1 * sizeof(int));
    items->filledIndices = 0;
    return items;
}

void enqueue(QUEUE* items, int val) {
    if (items->filledIndices < items->size) {
        items->backIndex += 1;
        if (items->backIndex < items->size) {
            items->arr[items->backIndex] = val;
            items->filledIndices += 1;
        }
        else {
            items->backIndex = 0;
            items->arr[items->backIndex] = val;
            items->filledIndices += 1;
        }
    }

    else {
        items->arr = realloc(items->arr, (2 * (items->size * sizeof(int))));
        items->backIndex += 1;
        items->arr[items->backIndex] = val;
        items->filledIndices += 1;
        items->size *= 2;
    }
    return;
}

void dequeue(QUEUE* items) {
    items->frontIndex += 1;
    items->filledIndices -= 1;
}

void printQUEUE(QUEUE* items) {
    
    return;
}




