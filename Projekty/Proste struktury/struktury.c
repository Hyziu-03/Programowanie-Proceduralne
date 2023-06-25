#include "naglowek.h"

void wypelnij(struct Tablica* tablica)
{
    if(tablica->zaalokowana == 1)
    {
        printf("Tablica zostala juz zaalokowana \n");
        return 0;
    }
    for(int i = 0; i < tablica->rozmiar; i++)
        *(tablica->tab + i) = i + 1;
}

void pokaz(struct Tablica* tablica)
{
    if(tablica->zaalokowana != 1)
    {
        printf("Tablica nie zostala zaalokowana \n");
        return 1;
    }
    for(int i = 0; i < tablica->rozmiar; i++)
        printf("%d ", *(tablica->tab + i));
}

void alokuj(struct Tablica* tablica)
{
    if(tablica->zaalokowana == 1)
    {
        printf("Tablica zostala juz zaalokowana \n");
        return 1;
    }

    printf("Podaj rozmiar talicy: ");
    scanf("%d", &tablica->rozmiar);
    tablica->tab = (int*)calloc(tablica->rozmiar, sizeof(int));
    tablica->zaalokowana = 1;
}

void zwolnij(struct Tablica* tablica)
{
    if(tablica->zaalokowana == 1)
        free(tablica->tab);
    else
        printf("Tablica nie zostala zaalokowana \n");
}
