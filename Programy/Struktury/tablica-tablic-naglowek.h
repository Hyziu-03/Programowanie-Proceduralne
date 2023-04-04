#ifndef TABLICA_TABLIC_NAGLOWEK_H
#define TABLICA_TABLIC_NAGLOWEK_H

#include <stdio.h>
#include <stdlib.h>
#include "naglowek.h"

struct TablicaTablic
{
    int rozmiar;
    struct Tablica* tab;
};

void wypelnij_tablice_tablic(struct TablicaTablic* tablica);
void pokaz_tablice_tablic(struct TablicaTablic* tablica);
void alokuj_tablice_tablic(struct TablicaTablic* tablica);
void zwolnij_tablice_tablic(struct TablicaTablic* tablica);

#endif // TABLICA_TABLIC_NAGLOWEK_H
