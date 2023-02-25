#include <stdio.h>

int main() {
	
	printf ("                  NUMMEROS TERMINADOS EN 4 \n");
	
    int n1, n2;

    printf("Escriba dos numeros enteros: ");
    scanf("%d %d", &n1, &n2);

    printf("Los numeros terminados en 4 comprendidos entre %d y %d son: ", n1, n2);
    if (1 < n2) {
        for (int i = n1 + 1; i < n2; i++) {
            if (i % 10 == 4) {
                printf("%d ", i);
            }
        }
    } else {
        for (int i = n2 + 1; i < n1; i++) {
            if (i % 10 == 4) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}

