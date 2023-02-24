#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fact=1, prom1, prom2, n, sum=0;
		
	printf("Digite un numero entero:\n");
	scanf("%i", &n);
	
	if(n==0){
		printf("El factorial es: %i\n",1);
	}
	for(int i=1; i<=n; i++){
		fact=fact*i;
		sum=sum+fact;
		prom1=fact/n;
		prom2=sum/n;
		printf("%i El factorial es: %i y el promedio entero es: %i\n",i,fact,prom1);
	}
	printf("\nLa suma de los factoriales es: %i\n",sum);
	printf("\nEl promedio entero de la sumatoria de los factoriales es: %i\n",prom2);
	return 0;
}

