#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("Los multiplos de 5 entre 1 y %d son:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

