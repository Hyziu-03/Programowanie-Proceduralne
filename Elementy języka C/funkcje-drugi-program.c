#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short wypelnij_tablice(int tablica[], int rozmiar);
void sumuj_tablice(int tablica[], int rozmiar);
int znajdz_najwiekszy(int tablica[], int rozmiar);
int znajdz_najmniejszy(int tablica[], int rozmiar);

int main()
{
    const int rozmiar = 10;
    int tablica[10];
    short czy_wypelniona = 0;

    czy_wypelniona = wypelnij_tablice(tablica, rozmiar);
    sumuj_tablice(tablica, rozmiar);

    if (czy_wypelniona > 0)
    {
        int najmniejszy = znajdz_najmniejszy(tablica, rozmiar);
        printf("Najmniejszy element w tej tablicy wynosi %d \n", najmniejszy);

        int najwiekszy = znajdz_najwiekszy(tablica, rozmiar);
        printf("Najwiekszy element w tej tablicy wynosi %d \n", najwiekszy);
    }

    return 0;
}

short wypelnij_tablice(int tablica[], int rozmiar)
{
    int init;
    time_t czas;
    init = time(&czas); // time.h jest dla funkcji time()
    srand(init);

    printf("Elementy w tablicy: ");
    for (int i = 0; i < rozmiar; i++)
        tablica[i] = rand() % 20 + 1; // stdlib.h jest dla funkcji rand()
    return 100;
}

void sumuj_tablice(int tablica[], int rozmiar)
{
    int suma = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        tablica[i] = rand() % 20 + 1; // stdlib.h jest dla funkcji rand()
        printf("%d ", tablica[i]);
        suma += tablica[i];
    }
    printf("\nSuma elementow w tej tablicy wynosi %d \n", suma);
}

int znajdz_najwiekszy(int tablica[], int rozmiar)
{
    int najwiekszy = tablica[0];
    for (int i = 1; i < rozmiar; i++)
        if (tablica[i] > najwiekszy)
            najwiekszy = tablica[i];
    return najwiekszy;
}

int znajdz_najmniejszy(int tablica[], int rozmiar)
{
    int najmniejszy = tablica[0];
    for (int i = 1; i < rozmiar; i++)
        if (tablica[i] < najmniejszy)
            najmniejszy = tablica[i];
    return najmniejszy;
}
