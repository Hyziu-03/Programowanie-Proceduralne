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

int zwieksz_o(int a)
{
    int ile;
    printf("O ile zwiekszyc? ");
    scanf("%d", &ile);
    return a + ile;
}

int zmniejsz_o(int a)
{
    int ile;
    printf("O ile zmniejszyc? ");
    scanf("%d", &ile);
    return a - ile;
}

int zwieksz_razy(int a)
{
    int ile;
    printf("Ile razy zwiekszyc? ");
    scanf("%d", &ile);
    return a * ile;
}

int zmniejsz_razy(int a)
{
    int ile;
    printf("Ile razy zmniejszyc? ");
    scanf("%d", &ile);
    return a / ile;
}

int kwadrat(int a)
{
    return a * a;
}

int operacje(int(*wsk)(int, int), int a, int b)
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
    int(*abc)(int);

    while(true)
    {
        int liczba;
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);

        printf("----------MENU---------- \n");
        printf("(1) Zwieksz o \n");
        printf("(2) Zmniejsz o \n");
        printf("(3) Zwieksz razy \n");
        printf("(4) Zmniejsz razy \n");
        printf("(5) Kwadrat \n");
        printf("(6) Zostaw \n");
        printf("(7) Operacje \n");
        printf("------------------------ \n");

        int wybor;
        printf("Co wybierasz? ");
        scanf("%d", &wybor);

        switch(wybor)
        {
            case 1:
                abc = zwieksz_o;
            break;

            case 2:
                abc = zmniejsz_o;
            break;

            case 3:
                abc = zwieksz_razy;
            break;

            case 4:
                abc = zmniejsz_razy;
            break;

            case 5:
                abc = kwadrat;
            break;

            case 6:
                printf("To koniec");
                exit(0);
            break;

            case 7:
                while(true)
                {
                    int liczba1, liczba2;
                    printf("Podaj pierwsza liczbe: ");
                    scanf("%d", &liczba1);
                    printf("Podaj druga liczbe: ");
                    scanf("%d", &liczba2);

                    printf("----------MENU---------- \n");
                    printf("(1) Dodawanie \n");
                    printf("(2) Odejmowanie \n");
                    printf("(3) Mnozenie \n");
                    printf("(4) Koniec \n");
                    printf("------------------------ \n");
                    operacje(wsk, liczba1, liczba2);
                }
            break;

            default:
                printf("Nie ma takiej opcji");
        }

        printf("Wynik operacji to %d \n", abc(liczba));
    }

    return 0;
}
