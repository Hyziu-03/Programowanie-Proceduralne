#include <stdio.h>

int main()
{
    int wybor;
    printf("Masz do wyboru 1, 2, 3 lub 4 \n");
    printf("Wybor = ");
    scanf("%d", &wybor);

    switch (wybor)
    {
        case 1:
        case 2:
        case 3:
            printf("Wybrano 1, 2 lub 3 \n");
        break;

        case 4:
            printf("Wybrano 4 \n");
        break;

        default:
            printf("nie ma takiej opcji :)");
    }

    return 0;
}
