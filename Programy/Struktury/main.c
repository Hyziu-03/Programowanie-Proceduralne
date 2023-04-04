#include "funkcje.c"
#include "funkcje-tablicy-tablic.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Tablica tablica;
    struct TablicaTablic tablica_tablic;

    alokuj(&tablica);
    alokuj_tablice_tablic(&tablica_tablic);

    wypelnij(&tablica);
    wypelnij_tablice_tablic(&tablica_tablic);

    pokaz_tablice_tablic(&tablica_tablic);

    zwolnij(&tablica);
    zwolnij_tablice_tablic(&tablica_tablic);

    return 0;
}
