#include <stdio.h>

void zamien(int *pierwsza, int *druga)
{
    int chwilowa = 0;
    chwilowa = *pierwsza;
    *pierwsza = *druga;
    *druga = chwilowa;
}

int main()
{
    int variable = 76;
    printf("variable =  %d \n", variable);

    // wskaznik
    int *pointer = &variable;

    // odniesienie do wartosci znajdujacej...
    // ...sie pod adresem przechowywanym przez wskaznik
    *pointer = 987;
    printf("variable =  %d \n", variable);

    int a = 10, b = 20;
    printf("\na = %d \n", a);
    printf("b = %d \n", b);

    zamien(&a, &b);
    printf("\na = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}
