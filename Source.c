#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	float f = 3.14;
	int b = f;
	puts("Введите вещественное число:");
	scanf("%f", &f);
	printf("float = %f\n Числа до запятой: %d\n Числа после запятой:%f", f, b, f - b);
}