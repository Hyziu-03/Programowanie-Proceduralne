#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
        printf("%d ", i + 1);
    printf("\n");

    int sterowanie = 0;
    while (sterowanie < 10)
    {
        printf("%d ", sterowanie + 1);
        sterowanie += 1;
    }
    printf("\n");

    sterowanie = 0;
    do {
        printf("%d ", sterowanie + 1);
        sterowanie += 1;
    } while (sterowanie < 10);
    printf("\n");

    return 0;
}

