#include "naglowek.h"

void wypelnij(struct Tablica* tablica)
{
    if(tablica->zaalokowana != 1)
    {
        for(int i = 0; i < tablica->rozmiar; i++)
        {
            *(tablica->tab + i) = i + 1;
        }
    }
    else
    {
        printf("Tablica zostala juz zaalokowana \n");
    }
}

void pokaz(struct Tablica* tablica)
{
    if(tablica->zaalokowana == 1)
    {
        for(int i = 0; i < tablica->rozmiar; i++)
        {
            printf("%d ", *(tablica->tab + i));
        }
    }
    else
    {
        printf("Tablica nie zostala zaalokowana \n");
    }
}

void alokuj(struct Tablica* tablica)
{
    if(tablica->zaalokowana != 1)
    {
        printf("Podaj rozmiar talicy: ");
        scanf("%d", &tablica->rozmiar);
        tablica->tab = (int*)calloc(tablica->rozmiar, sizeof(int));
        tablica->zaalokowana = 1;
    }
    else
    {
        printf("Tablica zostala juz zaalokowana \n");
    }
}

void zwolnij(struct Tablica* tablica)
{
    if(tablica->zaalokowana == 1)
    {
        free(tablica->tab);
    }
    else
    {
        printf("Tablica nie zostala zaalokowana \n");
    }
}
