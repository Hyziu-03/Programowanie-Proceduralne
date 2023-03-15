#include <stdio.h>
#include <math.h>

int main() {
	float radius = 0, height = 0;
	float cylinder_volume = 0, cone_volume = 0;

	printf("Podaj r = ");
	scanf_s("%f", &radius);

	printf("Podaj H = ");
	scanf_s("%f", &height);
	printf("\n");

	float PI = 3.1415;

	cone_volume = PI * pow(radius, 2) * height / 3;
	cylinder_volume = PI * pow(radius, 2) * height;

	printf("V stozka = %f \n", cone_volume);
	printf("V walca = %f \n", cylinder_volume);
	printf("\n");

	float ratio = cylinder_volume / cone_volume;
	printf("V walca jest %f razy wieksza od V stozka", ratio);
	printf("\n");

	return 0;
}
