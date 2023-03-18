#include <stdio.h>

void hello_world();
void integers();
void floats();
void ASCII();

int main()
{
	// Hello world
	// hello_world();
	
	// Print an integer entered by the user, add two integers
	// integers();
	
	// Multiply two floating point numbers
	// floats();

	// Find ASCII value of a character
	// ASCII();

	return 0;
}

void hello_world()
{
	printf("Hello world! \n");
}

void integers()
{
	int one, two, sum;

	printf("Enter the first integer: ");
	scanf_s("%d", &one);

	printf("Enter the second integer: ");
	scanf_s("%d", &two);

	sum = one + two;

	printf("You entered %d and %d \n", one, two);
	printf("%d + %d = %d \n", one, two, sum);
}

void floats()
{
	float first, second, result;

	printf("Enter the first number: ");
	scanf_s("%f", &first);

	printf("Enter the second number: ");
	scanf_s("%f", &second);

	result = first * second;

	printf("You entered %f and %f \n", first, second);
	printf("%f * %f = %f", first, second, result);
}

void ASCII()
{
	char character;

	printf("Enter a character: ");
	scanf_s("%c", &character);

	printf("The ASCII value of this character is %d", character);
}
