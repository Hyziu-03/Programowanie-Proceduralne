#ifndef OSOBA_H
#define OSOBA_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Adres
{
    char miasto[50];
    char ulica[50];
    char kod_pocztowy[50];
    int numer_mieszkania;
};

struct Osoba {
    char imie[50];
    char nazwisko[50];
    int wiek;
    struct Adres adres;
};

struct Odczytana {
    char imie[50];
    char nazwisko[50];
    int wiek;
    struct Adres adres;
};

void dodaj_adres(struct Adres* adres)
{
    FILE* plik;

    printf("Podaj swoje miasto: ");
    scanf("%s", adres->miasto);

    printf("Podaj swoja ulice: ");
    scanf("%s", adres->ulica);

    printf("Podaj swoj kod pocztowy: ");
    scanf("%s", &adres->kod_pocztowy);

    printf("Podaj numer swojego mieszkania: ");
    scanf("%d", &adres->numer_mieszkania);

    plik = fopen("testowy-plik-adres.txt", "a+");
    fprintf(plik, "%s\t%s\t%s\t%d\n", adres->miasto, adres->ulica, adres->kod_pocztowy, adres->numer_mieszkania);

    rewind(plik);
    fclose(plik);
}

void pokaz_adres(struct Adres* adres)
{
    int koniec_pliku = 0;
    FILE* plik;
    plik = fopen("testowy-plik-adres.txt", "a+");

    do
    {
        koniec_pliku = fscanf(plik, "%s%s%d", adres->miasto, adres->ulica, adres->kod_pocztowy, adres->numer_mieszkania);
        if(koniec_pliku > 0)
        {
            printf("%s\t%s\t%d\n", adres->miasto, adres->ulica, adres->kod_pocztowy, adres->numer_mieszkania);
        }
    } while (koniec_pliku > 0);

    fclose(plik);
}

void dodaj_osobe(struct Osoba* osoba)
{
    FILE* plik;

    printf("Podaj swoje imie: ");
    scanf("%s", osoba->imie);

    printf("Podaj swoje nazwisko: ");
    scanf("%s", osoba->nazwisko);

    printf("Podaj swoj wiek: ");
    scanf("%d", &osoba->wiek);

    dodaj_adres(&osoba->adres);

    plik = fopen("testowy-plik-adres.txt", "a+");
    fprintf(plik, "%s\t%s\t%d\n", osoba->imie, osoba->nazwisko, osoba->wiek);
    fprintf(plik, "\n");

    rewind(plik);
    fclose(plik);
}

void pokaz_osobe(struct Odczytana* odczytana)
{

    int koniec_pliku = 0;
    FILE* plik;
    plik = fopen("testowy-plik-adres.txt", "a+");

    do
    {
        koniec_pliku = fscanf(plik, "%s%s%d", odczytana->imie, odczytana->nazwisko, &odczytana->wiek);
        if(koniec_pliku > 0)
        {
            pokaz_adres(&odczytana->adres);
            printf("%s\t%s\t%d\n", odczytana->imie, odczytana->nazwisko, odczytana->wiek);
        }
    } while (koniec_pliku > 0);

    fclose(plik);
}

#endif // OSOBA_H
