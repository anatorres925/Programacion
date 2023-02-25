#include <stdio.h>

int main() {
    int n;

    printf("Escriba un numero entero de tres digitos: ");
    scanf("%d", &n);

    printf("Los enteros comprendidos entre 1 y cada uno de los digitos de %d son:\n", n);
    int d1 = n / 100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;

    printf("Entre 1 y %d: ", d1);
    for (int i = 1; i <= d1; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Entre 1 y %d: ", d2);
    for (int i = 1; i <= d2; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Entre 1 y %d: ", d3);
    for (int i = 1; i <= d3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

