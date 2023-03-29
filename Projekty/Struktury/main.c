#include "funkcje.c"

int main()
{
    struct TablicaDynamiczna td;

    zaalokuj_tablice(&td); printf("\n");
    wypelnij_tablice(&td); printf("\n");
    pokaz_tablice(&td); printf("\n");
    sortuj_babelkowo(&td);
    pokaz_tablice(&td); printf("\n");
    printf("Suma elementow tej tablicy wynosi %.2f \n", oblicz_sume_tablicy(&td));
    printf("Najmniejszy element w tej tablicy to %.2f \n", znajdz_najmniejszy_element(&td));
    zwolnij_pamiec(&td);

    return 0;
}
