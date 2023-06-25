#include <stdio.h>

void zamien(int *first, int *second)
{
    int temporary = 0;
    temporary = *first;
    *first = *second;
    *second = temporary;
}

int main()
{
    int variable = 76;
    printf("variable =  %d \n", variable);

    int *pointer = &variable;
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
