#include <stdio.h>

int main() {
    int n, s = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        s += i;
    }

    printf("La suma de los enteros comprendidos entre 1 y %d es %d.\n", n, s);

    return 0;
}

