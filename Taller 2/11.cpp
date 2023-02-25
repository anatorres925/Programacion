#include <stdio.h>

int main() {
	
    int n, d1, d2;

    printf("Ingrese un numero entero de dos digitos: ");
    scanf("%d", &n);

    
    d1 = n / 10;

    
    d2 = n % 10;

    
    int menor = d1 < d2 ? d1 : d2;
    int mayor = d1 > d2 ? d1 : d2;

    printf("Los enteros comprendidos entre %d y %d son:\n", menor, mayor);

    for (int i = menor; i <= mayor; i++) {
        printf("%d ", i);
        
    }
    
    printf("\n");

    return 0;
    
}

