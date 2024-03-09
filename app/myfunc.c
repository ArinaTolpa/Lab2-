#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(float a, float b, float c, float *x1, float *x2) {
    float dick = b * b - 4 * a * c;
    if (a == 0) {
	printf("Неккоректный ввод");
	return 1;}
    if (b == 0) {
	printf("Неккоректный ввод");
	return 2;}

    if (dick > 0) {
        *x1 = (-b + sqrt(dick)) / (2 * a);
        *x2 = (-b - sqrt(dick)) / (2 * a);
        printf("x1 = %.2f\n", *x1);
        printf("x2 = %.2f\n", *x2);
	return 4;
    }
    if (dick == 0) {
        *x1 = (-b) / (2 * a);
        printf("x = %.2f\n", *x1);
	return 5;
    }
    if (dick < 0) { // Исправлено
        printf("Уравнение не имеет корней\n");
	return 6;
    }
    return 0;
}
