#include "funkcje.h"

void zaalokuj_tablice(struct TablicaDynamiczna* tab)
{
    printf("Podaj rozmiar tablicy dynamicznej: ");
    scanf("%d", &tab->rozmiar);
    tab->tablica = (float*)calloc(tab->rozmiar, sizeof(float));
}

void zwolnij_pamiec(struct TablicaDynamiczna* tab)
{
    free(tab->tablica);
}

void wypelnij_tablice(struct TablicaDynamiczna* tab)
{
    int init;
    time_t czas;
    init = time(&czas);
    srand(init);

    int dol;
    printf("Podaj dolna granice przedzialu, z ktorego bede losowac liczby: ");
    scanf("%d", &dol);

    int gora;
    printf("Podaj gorna granice przedzialu, z ktorego bede losowac liczby: ");
    scanf("%d", &gora);

    float losowa_liczba;
    for(int i = 0; i < tab->rozmiar; i++)
    {
        // Wyrazenie (rand() % (gora - dol + 1)) + dol zapewni wartosc z podanego przedzialu domknietego
        // Przyklad, dla dol = 10, gora = 100 bedzie to (rand() % 91) + 10
        // Otrzymam wiec liczby z przedzialu 0-90 i dodam do nich 10, wiec efektywnie bede losowac...
        // ...z podanego przedzialu 10-100
        losowa_liczba = (rand() % (gora - dol + 1)) + dol;
        *(tab->tablica + i) = losowa_liczba;
    }
}

void pokaz_tablice(struct TablicaDynamiczna* tab)
{
    printf("Tablica wyglada w ten sposob: \n");

    // Zaokraglanie liczby rzeczywistej do dwoch miejsc po przecinku dla zaoszczedzenia...
    // ...miejsca na ekranie
    for(int i = 0; i < tab->rozmiar; i++)
        printf("%.2f ", *(tab->tablica + i));
    printf("\n");
}

void sortuj_babelkowo(struct TablicaDynamiczna* tab)
{
    int rozmiar = tab->rozmiar;
    for(int i = 0; i < rozmiar; i++)
        for(int j = 0; j < rozmiar - i - 1; j++)
                if(tab->tablica[j] > tab->tablica[j + 1])
                {
                    float temp = tab->tablica[j];
                    tab->tablica[j] = tab->tablica[j + 1];
                    tab->tablica[j + 1] = temp;
                }
    printf("Posortowalem tablice babelkowo \n");
}

float oblicz_sume_tablicy(struct TablicaDynamiczna* tab)
{
    float suma = 0;
    for(int i = 0; i < tab->rozmiar; i++)
        suma += tab->tablica[i];
    return suma;
}

float znajdz_najmniejszy_element(struct TablicaDynamiczna* tab)
{
    float najmniejszy_element = tab->tablica[0];

    for(int i = 0; i < tab->rozmiar; i++)
        if(tab->tablica[i] < najmniejszy_element)
            najmniejszy_element = tab->tablica[i];

    return najmniejszy_element;
}

float znajdz_najwiekszy_element(struct TablicaDynamiczna* tab)
{
    float najwiekszy_element = tab->tablica[0];

    for(int i = 0; i < tab->rozmiar; i++)
        if(tab->tablica[i] > najwiekszy_element)
            najwiekszy_element = tab->tablica[i];

    return najwiekszy_element;
}
