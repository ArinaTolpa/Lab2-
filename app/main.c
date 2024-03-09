#include <stdio.h>
#include "myfunc.h"
#define _CRT_SECURE_NO_WARNINGS
int main() {
	float a, b, c;
	float x1, x2;
	printf("Введите коэффициенты уравнения: a, b, c\n");
	if(scanf("%f %f %f", &a, &b, &c)) {}

	myfunc(a, b, c, &x1, &x2);
	return 0; }

