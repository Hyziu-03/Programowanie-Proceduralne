#include "osoba.h"

int main()
{
    int wybor;
    const int ROZMIAR = 2;

    while(wybor != 3)
    {
        printf("_____MENU_____\n");
        printf("Wybierz 1 aby odczytac zawartosc pliku\n");
        printf("Wybierz 2, aby dodac nowa osobe do pliku\n");
        printf("Wybierz 3, aby skonczyc program\n");

        printf("Twoj wybor to: ");
        scanf("%d", &wybor);
        printf("\n");

        switch(wybor)
        {
            case 1:
            {
                struct Odczytana odczytana;
                struct Adres adres;
                pokaz_osobe(&odczytana);
            }
            break;

            case 2:
            {
                struct Osoba *tablica = malloc(ROZMIAR * sizeof(struct Osoba));
                for(int i = 0; i < ROZMIAR; i++)
                {
                    dodaj_osobe(&tablica[i]);
                }
            }
            break;

            case 3:
                printf("Koniec programu!");
            break;

            default:
                printf("Nie wybrano poprawnej opcji\n");
        }

        printf("\n");
    }

    return 0;
}
