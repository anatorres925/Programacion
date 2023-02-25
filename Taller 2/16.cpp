#include <stdio.h>
#include <math.h>

int main() {
    int n, i, multiplo, suma = 0;
    float promedio;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        multiplo = i * 3;
        suma += multiplo;
    }
    promedio = (float)suma / n;
    int promInt = (int) round(promedio);
    
    printf("El promedio entero de los primeros %d multiplos de 3 es: %d", n, promInt);
    
    return 0;
}
