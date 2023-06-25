#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

struct queueNode {
	char data;
	struct queueNode* next_pointer;
};

typedef struct queueNode QueueNode;
typedef struct queueNode* QueueNode_pointer;

void push(QueueNode_pointer* head_pointer, QueueNode_pointer* tail_pointer, char value);
char pop(QueueNode_pointer* head_pointer, QueueNode_pointer* tail_pointer);
void print(QueueNode_pointer current_pointer);
int is_empty(QueueNode_pointer head_pointer);

#endif // !QUEUE_H
