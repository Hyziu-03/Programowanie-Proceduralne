#include "queue.h"

int main() {
	QueueNode_pointer head_pointer = NULL;
	QueueNode_pointer tail_pointer = NULL;
	
	unsigned int choice;
	char element;

	do {
		printf("\n1 - dodaj element do kolejki\n2 - usun element z kolejki\n3 - pokaz kolejke\n4 - koniec\n");
		scanf("%u", &choice);
	
		switch (choice)
		{
			case 1:
				printf("Podaj dowolny znak: ");
				scanf("\n%c", &element);
				push(&head_pointer, &tail_pointer, element);
			break;
			
			case 2:
				if (!is_empty(head_pointer))
				{
					element = pop(&head_pointer, &tail_pointer);
					printf("Zostal usuniety element: %c\n", element);
				}
			break;
			
			case 3:
				print(head_pointer);
			break;
			
			case 4:
				printf("Koniec\n");
			break;
			
			default:
				printf("Nie ma takiej opcji!\n");
		}
	} while (choice != 4);

	return 0;
}