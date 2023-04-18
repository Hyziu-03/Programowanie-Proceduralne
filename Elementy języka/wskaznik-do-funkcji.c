#include <stdio.h>
#include <stdlib.h>

int true = 1;

int dodawanie(int a, int b)
{
    return a + b;
}

int mnozenie(int a, int b)
{
    return a * b;
}

int odejmowanie(int a, int b)
{
    return a - b;
}

void obliczenia(int(*wsk)(int, int), int a, int b)
{
    int wybor;
    printf("Co wybierasz? ");
    scanf("%d", &wybor);

    switch(wybor)
    {
    case 1:
        wsk = dodawanie;
        break;

    case 2:
        wsk = odejmowanie;
        break;

    case 3:
        wsk = mnozenie;
        break;

    case 4:
        printf("To koniec");
        exit(0);
        break;

    default:
        printf("Nie ma takiej opcji");
    }

    printf("Wynik operacji to %d \n", wsk(a, b));
}

int main()
{
    int(*wsk)(int, int);

    int liczba1, liczba2;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);

    while(true)
    {
        printf("----------MENU---------- \n");
        printf("(1) Dodawanie \n");
        printf("(2) Odejmowanie \n");
        printf("(3) Mnozenie \n");
        printf("(4) Koniec \n");
        printf("------------------------ \n");
        obliczenia(wsk, liczba1, liczba2);
    }

    return 0;
}
