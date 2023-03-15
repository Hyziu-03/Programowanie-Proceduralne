#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int number = i + 1;
        printf("%d ", number);
    }

    printf("\n");

    // --------------------

    int sterowanie = 0;

    while (sterowanie < 10)
    {
        int liczba = sterowanie + 1;
        printf("%d ", liczba);

        sterowanie += 1;
    }

    // --------------------

    printf("\n");

    sterowanie = 0;

    do {
        int liczba = sterowanie + 1;
        printf("%d ", liczba);

        sterowanie += 1;
    } while (sterowanie < 10);

    printf("\n");

    return 0;
}

