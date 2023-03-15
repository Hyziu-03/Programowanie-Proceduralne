#include <stdio.h>

void pokaz_menu();
int wybierz_opcje();
float podaj_liczbe();
void wstaw_nowa_linie();

void podziel(float a, float b);
void dodaj(float a, float b);

void uruchom();

int main()
{
    uruchom(); return 0;
}

void pokaz_menu()
{
    printf(".....MENU..... \n");

    printf("1) DODAWANIE \n");
    printf("2) DZIELENIE \n");
    printf("3) KONIEC \n");
}

int wybierz_opcje()
{
    int opcja;

    printf("\nWybierz opcje: ");
    scanf_s("%d", &opcja);

    wstaw_nowa_linie();

    if (opcja != 1 && opcja != 2 && opcja != 3)
    {
        return 0;
    }
    else
    {
        return opcja;
    }
}

float podaj_liczbe()
{
    float liczba = 0;

    printf("Podaj liczbe: ");
    scanf_s("%f", &liczba);

    return liczba;
}

void wstaw_nowa_linie()
{
    printf("\n");
}

void podziel(float a, float b)
{
    if (b != 0)
    {
        float wynik = a / b;
        printf("Wynik to %f \n", wynik);
    }
    else
    {
        printf("Nie mozna dzielic przez 0 \n");
    }
}

void dodaj(float a, float b)
{
    float wynik = a + b;
    printf("Wynik to %f \n", wynik);
}

void uruchom()
{
    while (1)
    {
        pokaz_menu();

        int opcja = wybierz_opcje();

        if (opcja == 1)
        {
            float liczba1 = podaj_liczbe();
            float liczba2 = podaj_liczbe();

            wstaw_nowa_linie();

            dodaj(liczba1, liczba2);
        }
        else if (opcja == 2)
        {
            float liczba1 = podaj_liczbe();
            float liczba2 = podaj_liczbe();

            wstaw_nowa_linie();

            podziel(liczba1, liczba2);
        }
        else if (opcja == 3)
        {
            printf("Koniec programu \n"); break;
        }
        else
        {
            printf("Nie ma takiej opcji. :) Wybierz 1, 2 lub 3 \n");
        }

        wstaw_nowa_linie();
    }
}
