#include "naglowek.h";

void zeruj(int* tablica, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
        *(tablica + i) = 0;
    printf("Tablica zostala wyzerowana \n");
}

void wypelnij(int* tablica, int rozmiar)
{
    int init;
    time_t czas;
    init = time(&czas);
    srand(init);

    for (int i = 0; i < rozmiar; i++)
        *(tablica + i) = rand() % 20 + 1;
    printf("Tablica zostala wypelniona wartosciami \n");
}

int oblicz_sume_elementow(int* tablica, int rozmiar)
{
    int suma = 0;
    for (int i = 0; i < rozmiar; i++)
        suma += *(tablica + i);
    printf("Suma elemenentow w tablicy zostala policzona \n");
    return suma;
}

void pokaz(int* tablica, int rozmiar)
{
    printf("Zawartosc tablicy \n");
    for (int i = 0; i < rozmiar; i++)
        printf("%d ", *(tablica + i));
    printf("\n");
}
