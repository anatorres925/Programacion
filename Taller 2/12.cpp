#include <stdio.h>

int main() {
    int n, d, d1 = 0;

    printf("Ingrese un numero entero de 3 digitos: ");
    scanf("%d", &n);

    
    d = n % 10;
    if (d == 1) {
        d1 = 1;
    }
    n /= 10;

    d = n % 10;
    if (d == 1) {
        d1 = 1;
    }
    n /= 10;

    d = n % 10;
    if (d == 1) {
        d1 = 1;
    }

    if (d1) {
        printf("El numero ingresado si tiene el digito 1.\n");
    } else {
        printf("El numero ingresado no tiene el digito 1.\n");
    }

    return 0;
}

