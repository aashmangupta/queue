//
// Created by Aashman Gupta on 12/22/17.
//
#ifndef MYQUEUE_QUEUE_H
#define MYQUEUE_QUEUE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct queue QUEUE;

extern QUEUE* newQUEUE();                          //Constructor.
extern QUEUE* enqueue(QUEUE* items, int num);      //Adds value to the back of the line.
extern QUEUE* dequeue(QUEUE* items);               //Removes value from the front of the line.
extern int peekQUEUE(QUEUE* items);                //Returns value on top of queue.
extern int sizeQUEUE(QUEUE* items);                //Returns the size of queue.
extern void printQUEUE(QUEUE* items);              //Prints the entire queue.

#endif //MYQUEUE_QUEUE_H
