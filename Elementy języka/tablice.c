#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int rozmiar = 10;
    int tablica[rozmiar];

    int init;
    time_t czas;
    init = time(&czas);
    srand(init);

    for (int i = 0; i < rozmiar; i++)
    {
        tablica[i] = rand() % 20 + 1;
        printf("%d ", tablica[i]);
    }

    printf("\n");

    for (int i = rozmiar - 1; i >= 0; i--)
    {
        printf("%d ", tablica[i]);
    }

    printf("\n");

    return 0;
}
