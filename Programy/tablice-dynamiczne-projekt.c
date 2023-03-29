#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "funkcje.c";

int main()
{
    int rozmiar;
    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &rozmiar);

    int* tablica;
    int obszar = rozmiar * sizeof(int);
    tablica = (int*)malloc(obszar);

    int wybor;
    do {
        printf("\n");
        printf("(1) ZERUJ \n");
        printf("(2) WYPELNIJ \n");
        printf("(3) OBLICZ SUME ELEMENTOW \n");
        printf("(4) POKAZ \n");
        printf("(5) WYJDZ Z PROGRAMU \n");

        printf("Co wybierasz: ");
        scanf_s("%d", &wybor);
        printf("\n");

        switch (wybor)
        {
            case 1:
                zeruj(tablica, rozmiar);
            break;

            case 2:
                wypelnij(tablica, rozmiar);
            break;

            case 3:
                printf("Suma elementow w tablicy wynosi %d \n", oblicz_sume_elementow(tablica, rozmiar));
            break;

            case 4:
                pokaz(tablica, rozmiar);
            break;

            case 5:
                printf("Koniec programu \n");
            break;

            default: 
                printf("Nie ma takiej opcji \n");
        }
    } while (wybor != 5);

    return 0;
}
