#include <locale.h>
#include <stdio.h>
#include <math.h>
int main(void) {

	setlocale(LC_ALL, "RUS");
	float x;
	printf("Задайте значение x\n");
	scanf_s("%f", &x);
	float b = 1 / (x + 6);
	printf(x > 1 ? "%f" : "0", b);



}