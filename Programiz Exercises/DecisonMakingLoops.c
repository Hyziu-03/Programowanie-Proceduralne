#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// Find the roots of a quadratic equation
void find_roots();

// Generate multuplication table
void multiplication_table();

// Count number of sigits in an integer
void count_digits();

// Reverse a number
void reverse_number();

// Display factors of a number
void factors();

int main()
{
	return 0;
}

void find_roots()
{
	printf("Podaj wspolczynniki rownania kwadratowego \n");
	int a, b, c;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	printf("c = ");
	scanf_s("%d", &c);

	printf("Twoje rownanie kwadratowe ma postac %dx^2 + %dx + %d\n", a, b, c);

	int delta = pow(b, 2) - 4 * a * c;
	if (delta < 0)
        printf("Twoje rownanie kwadratowe nie ma rozwiazan rzeczywistych \n");
	else
	{
		int x1 = (-b - sqrt(delta)) / 2 * a;
		int x2 = (-b + sqrt(delta)) / 2 * a;

		if (x1 != x2)
            printf("Rozwiazaniami twojego rownania kwadratowego sa x1 = %d i x2 = %d", x1, x2);
		else
			printf("Rozwiazaniem twojego rownania kwadratowego jest x = %d", x1);
	}
}

void multiplication_table()
{
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i < 10; i++)
            (j * i >= 10) ? (printf("%d * %d = %d   ", j, i, j * i)) : (printf("%d * %d = %d    ", j, i, j * i));
		printf("\n");
	}
}

void count_digits()
{
	int number;
	char buffer[12];

	printf("Podaj liczbe: ");
	scanf_s("%d", &number);
	sprintf_s(buffer, "%d", number);

	int count;
	for (count = 0; buffer[count] != '\0'; ++count);

	printf("Ta liczba ma %d cyfr(y)", count);
}

void reverse_number()
{
	int number;
	char buffer[12];

	printf("Podaj liczbe: ");
	scanf_s("%d", &number);
	sprintf_s(buffer, "%d", number);

	size_t size = strlen(buffer);

	printf("Odwrocona liczba: ");
	for (int i = size - 1; i >= 0; i--)
		printf("%c", buffer[i]);
}

void factors()
{
	int number;
	printf("Podaj liczbe: ");
	scanf_s("%d", &number);

	for (int i = 1; i < number; i++)
		if (number % i == 0)
			printf("%d jest dzielnikiem %d\n", i, number);
}
