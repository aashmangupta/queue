//
// Created by Aashman Gupta on 12/22/17.
//
#ifndef MYQUEUE_QUEUE_H
#define MYQUEUE_QUEUE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct queue QUEUE;

extern QUEUE* newQUEUE();                          //Constructor.
extern void enqueue(QUEUE* items, int val);        //Adds value to the back of the line.
extern void dequeue(QUEUE* items);                 //Removes value from the front of the line.
extern void peekQUEUE(QUEUE* items);                //Returns value on top of queue.
extern void printQUEUE(QUEUE* items);              //Prints the entire queue.
extern int isFull(QUEUE* items);                   //Returns 1 if items are full.
extern void allocateArr(QUEUE* items);             //Allocates memory for array and copies into a new temp arr.
#endif //MYQUEUE_QUEUE_H
