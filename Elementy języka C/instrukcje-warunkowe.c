#include <stdio.h>

int main()
{
    int liczba = 0;

    printf("Podaj liczbe calkowita > 10: ");
    scanf("%d", &liczba);

    if (liczba > 10)
    {
        printf("Wpisalxs liczbe > 10");
    }
    else if (liczba == 10)
    {
        printf("Wpisalxs liczbe = 10");
    }
    else
    {
        printf("Wpisalxs liczbe < 10");
    }

    printf("\n");

    return 0;
}
