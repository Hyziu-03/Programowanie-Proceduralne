#include <stdio.h>

// Hello world
void hello_world();

// Print an integer entered by the user, add two integers
void integers();

// Multiply two floating point numbers
void floats();

// Find ASCII value of a character
void ASCII();

// Compute quotient and remainder
void divide();

// Find size of types
void size();

// Swap two numbers
void swap();

int main()
{
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

void divide()
{
	float first, second, remainder;
	int result;

	printf("Enter the first number: ");
	scanf_s("%f", &first);

	printf("Enter the second number: ");
	scanf_s("%f", &second);

	result = first / second;
	remainder = first - (second * result);

	printf("%f / %f = %d \n", first, second, result);
	printf("%f mod %f = %f", first, second, remainder);
}

void size()
{
	printf("%d byte(s) \n", sizeof(int));
	printf("%d byte(s) \n", sizeof(float));
	printf("%d byte(s) \n", sizeof(double));
	printf("%d byte(s) ", sizeof(char));
}

void swap()
{
	float a, b, c;

	printf("Enter the first number: ");
	scanf_s("%f", &a);

	printf("Enter the second number: ");
	scanf_s("%f", &b);

	c = a;
	a = b;
	b = c;

	printf("a is now %f \n", a);
	printf("b is now %f", b);
}
