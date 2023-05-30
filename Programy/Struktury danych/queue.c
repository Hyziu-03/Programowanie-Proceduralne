#include "queue.h"

void push(QueueNode_pointer* head_pointer, QueueNode_pointer* tail_pointer, char value)
{
	QueueNode_pointer new_pointer = (QueueNode_pointer)malloc(sizeof(QueueNode));

	if (new_pointer == NULL)
	{
		printf("Brak pamieci!\n");
		return;
	}
	
	new_pointer->data = value;
	new_pointer->next_pointer = NULL;
		
	if (is_empty(*head_pointer)) 
		*head_pointer = new_pointer;
	else
		(*tail_pointer)->next_pointer = new_pointer;
	
	(*tail_pointer) = new_pointer;		
}

char pop(QueueNode_pointer* head_pointer, QueueNode_pointer* tail_pointer)
{
	char value = (*head_pointer)->data;
	
	QueueNode_pointer temp_pointer = *head_pointer;
	*head_pointer = (*head_pointer)->next_pointer;
	
	if (*head_pointer == NULL)
		*tail_pointer = NULL;
	
	free(temp_pointer);
	return value;
}

void print(QueueNode_pointer current_pointer)
{
	if (current_pointer == NULL)
	{
		puts("Kolejka jest pusta!\n");
		return;
	}

	puts("Zawartosc kolejki:");

	while (current_pointer != NULL)
	{
		printf("%c --> ", current_pointer->data);
		current_pointer = current_pointer->next_pointer;
	}
	
	printf("Koniec kolejki\n");
	
}

int is_empty(QueueNode_pointer head_pointer)
{
	return head_pointer == NULL;
}
