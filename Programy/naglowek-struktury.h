#ifndef NAGLOWEK_H
#define NAGLOWEK_H

#include <stdio.h>
#include <stdlib.h>

struct Tablica
{
    int rozmiar;
    int* tab;
    short zaalokowana;
};

void wypelnij(struct Tablica* tablica);
void pokaz(struct Tablica* tablica);
void alokuj(struct Tablica* tablica);
void zwolnij(struct Tablica* tablica);

#endif // NAGLOWEK_H
