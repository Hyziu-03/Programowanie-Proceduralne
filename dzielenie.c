#include <stdio.h>

int main()
{
    float number = 0, divisor = 0;

    printf("Podaj liczbe: ");
    scanf_s("%d", &number);

    printf("Podaj dzielnik: ");
    scanf_s("%d", &divisor);

    if (divisor != 0)
    {
        float result = number / divisor;
        printf("Wynik = %f", result);
    }
    else
    {
        printf("Nie mozna dzielic przez 0 \n");
    }

    return 0;
}
