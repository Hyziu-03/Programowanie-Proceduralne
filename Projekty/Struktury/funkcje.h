#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct TablicaDynamiczna
{
    float* tablica;
    int rozmiar;
};

void zaalokuj_tablice(struct TablicaDynamiczna* tab);
void zwolnij_pamiec(struct TablicaDynamiczna* tab);
void wypelnij_tablice(struct TablicaDynamiczna* tab);
void pokaz_tablice(struct TablicaDynamiczna* tab);
void sortuj_babelkowo(struct TablicaDynamiczna* tab);

float oblicz_sume_tablicy(struct TablicaDynamiczna* tab);
float znajdz_najmniejszy_element(struct TablicaDynamiczna* tab);
float znajdz_najwiekszy_element(struct TablicaDynamiczna* tab);

#endif // FUNKCJE_H
