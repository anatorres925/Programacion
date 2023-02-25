#include <stdio.h>

int main() {
	printf("          NUMEROS COMPRENDIDOS ENTRE 1 Y EL NUMERO INGRESADO \n ");
	
    int n;

    printf("Escriba un numero entero : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}




