#include <stdio.h>

int main() {
    int n1, n2;

    printf("Escriba dos numeros enteros: ");
    scanf("%d %d", &n1, &n2);

    printf("Los numeros enteros comprendidos entre %d y %d son: ", n1, n2);
    if (n1 < n2) {
        for (int i = n1 + 1; i < n2; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = n2 + 1; i < n1; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}

