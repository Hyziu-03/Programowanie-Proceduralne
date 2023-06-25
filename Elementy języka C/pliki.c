#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Osoba {
    char imie[40];
    char nazwisko[40];
    int wiek;
};

int main()
{
    FILE* plik;
    char napis[40] = "nowy tekst";
    char imie[40];

    printf("Podaj imie: ");
    scanf("%39s", &imie);

    plik = fopen("nowy_plik.txt", "a+");
    fprintf(plik, "%s\n", napis);
    fclose(plik);

    printf("Utworzono nowy plik");
    return 0;
}
