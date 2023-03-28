#include "struktury.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Tablica tablica;

    alokuj(&tablica);
    wypelnij(&tablica);
    pokaz(&tablica);
    zwolnij(&tablica);

    return 0;
}
