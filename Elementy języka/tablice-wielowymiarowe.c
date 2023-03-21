#include <stdio.h>

int main()
{
    const int wiersze = 5;
    const int kolumny = 5;

    int tablica[wiersze][kolumny];

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            tablica[i][j] = j + 1;
        }
    }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
