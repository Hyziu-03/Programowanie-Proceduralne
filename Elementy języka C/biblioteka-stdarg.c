#include <stdio.h>
#include <stdarg.h>

int printf(const char* format, ...);

double avg(int count, ...);
double median(int count, ...);

int main()
{
    double a, b, c, d, e, f;
    a = 56.7;
    b = 34.5;
    c = 78.9;
    d = 23.4;
    e = 12.3;
    f = 65.4;

    printf("Average: %f \n", avg(3, a, b, c));
    printf("Median of 3: %f \n", median(3, a, b, c));
    printf("Median of 6: %f", median(6, a, b, c, d, e, f));

    return 0;
}

double median(int count, ...)
{
    double median_value;
    double values[count];

    va_list variables;
    va_start(variables, count);

    for (int i = 0; i < count; i++)
        values[i] = va_arg(variables, double);

    va_end(variables);

    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (values[i] > values[j])
            {
                double temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }

    int mid = count / 2;

    if (count % 2 == 0)
        median_value = (values[mid - 1] + values[mid]) / 2.0;

    else
        median_value = values[mid];

    return median_value;
}

double avg(int count, ...)
{
    double value = 0.0;
    va_list variables;
    va_start(variables, count);

    for (int i = 0; i < count; ++i)
        value += va_arg(variables, double);

    va_end(variables);

    return value / count;
}
