#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	float f = 3.14;
	int b = f;
	puts("������� ������������ �����:");
	scanf("%f", &f);
	printf("float = %f\n ����� �� �������: %d\n ����� ����� �������:%f", f, b, f - b);
}