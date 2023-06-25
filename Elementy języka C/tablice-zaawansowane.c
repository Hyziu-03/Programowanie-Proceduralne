#include <stdio.h>

int main()
{
    const int wiersze = 7;
    const int kolumny = 7;

    int tablica[wiersze][kolumny];

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
        {
            int warunek = i == 0 || i == wiersze - 1 || j == 0 || j == kolumny - 1;
            warunek ? (tablica[i][j] = 0) : (tablica[i][j] = j + 1);
        }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
            printf("%d ", tablica[i][j]);
        printf("\n");
    }

    return 0;
}
