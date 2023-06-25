#include <stdio.h>

int globalscoped;
// zwraca liczbę całkowitą, nazywa się main i niczego nie przyjmuje

int main() {
	int variable;
	// printf("%d", variable);
	// Błąd C4700 użycie niezainicjowanej zmiennej lokalnej "variable"
	variable = 28;

	printf("Podaj wartosc: ");
	scanf_s("%d", &variable);

	{
		int blockscoped;
		// Ostrzeżenie C4101 "blockscoped": lokalna zmienna, do której nie istnieje odwołanie
	}

	printf("variable = %d \n", variable);
	// odwolanie sie do adresu poprzez &
	// scanf("%d", variable); wykorzystuje przekazywanie przez wartosc

	int somevariable = 45;
	float result;
	printf("somevariable = %d \n", somevariable);
	result = (float)variable / (float)somevariable;
	printf("variable / somevariable = %f", result);

	return 0;
}
// function() {} zwroci int
