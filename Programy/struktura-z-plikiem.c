#include "naglowek.h"

int main()
{
    FILE* plik;
    plik = fopen("osoba.txt", "a+");

    int rozmiar;
    printf("Ile osob chcesz dodac? ");
    scanf("%d", &rozmiar);

    struct Osoba* tablica = (struct Osoba*)calloc(rozmiar, sizeof(struct Osoba));
    for(int i = 0; i < rozmiar; i++)
    {
        struct Osoba osoba;
        printf("Podaj imie: ");
        scanf("%s", &osoba.imie);
        printf("Podaj nazwisko: ");
        scanf("%s", &osoba.nazwisko);
        printf("Podaj wiek: ");
        scanf("%d", &osoba.wiek);
        *(tablica + i) = osoba;
    }

    fprintf(plik, "IMIE\tNAZWISKO\tWIEK\n");
    for(int i = 0; i < rozmiar; i++)
    {
        fprintf(plik, "%s\t%s\t%d\n", tablica[i].imie, tablica[i].nazwisko, tablica[i].wiek);
    }

    fclose(plik);
    free(tablica);
    return 0;
}
