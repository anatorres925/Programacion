#include <stdio.h>

int main() {
	
	printf ("                       DIVISORES EXACTOS \n");
	
    int n;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    printf("Los divisores exactos del numero %d son: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
