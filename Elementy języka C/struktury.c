#include <stdio.h>

struct Struktura
{
    int liczba;
    float liczba_przecinek;
    short krotka_liczba;
};

int main()
{
    struct Struktura liczba;
    struct Struktura* wskaznik;
    wskaznik = &liczba;

    int dowolna_liczba;
    float dowolna_liczba_2;
    short dowolna_liczba_3;

    printf("Podaj dowolna liczbe: ");
    scanf("%d", &dowolna_liczba);

    printf("Podaj dowolna liczbe zmiennoprzecinkowa: ");
    scanf("%f", &dowolna_liczba_2);

    printf("Podaj dowolna liczbe (krotka): ");
    scanf("%s", &dowolna_liczba_3);

    liczba.liczba = dowolna_liczba;
    liczba.liczba_przecinek = dowolna_liczba_2;
    liczba.krotka_liczba = dowolna_liczba_3;

    wskaznik -> liczba = 786;
    wskaznik -> liczba_przecinek = 987;
    wskaznik -> krotka_liczba = 456;

    printf("%d ", liczba.liczba);
    printf("%d ", wskaznik->krotka_liczba);

    return 0;
}
