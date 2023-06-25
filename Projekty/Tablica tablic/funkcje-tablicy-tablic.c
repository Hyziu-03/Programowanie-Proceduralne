#include "tablica-tablic-naglowek.h"

void wypelnij_tablice_tablic(struct TablicaTablic* tablica)
{
    struct Tablica t;
    alokuj(&t);
    wypelnij(&t);

    for(int i = 0; i < tablica->rozmiar; i++)
        *(tablica->tab + i) = t;
}

void pokaz_tablice_tablic(struct TablicaTablic* tablica)
{
    for(int i = 0; i < tablica->rozmiar; i++)
    {
        for(int j = 0; j < tablica->rozmiar; j++)
            printf("%d ", tablica->tab[i].tab[j]);
        printf("\n");
    }
}

void alokuj_tablice_tablic(struct TablicaTablic* tablica)
{
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &tablica->rozmiar);
    tablica->tab = (struct Tablica*) calloc(tablica->rozmiar, sizeof(struct Tablica));
}

void zwolnij_tablice_tablic(struct TablicaTablic* tablica)
{
    free(tablica->tab);
}
