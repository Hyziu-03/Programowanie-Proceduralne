#include <stdio.h>

int main()
{
    float number = 0, divisor = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &number);

    printf("Podaj dzielnik: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Nie mozna dzielic przez 0 \n");
        return 1;
    }

    float result = number / divisor;
    printf("Wynik = %f", result);
    return 0;
}
