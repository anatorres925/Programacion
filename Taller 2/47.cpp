#include <stdio.h>
#include <stdlib.h>

int main() {
	int fact=1;
	int n, sum=0;
	
	printf("Digite un numero entero:\n");
	scanf("%i", &n);
	
	if(n==0){
		printf("El factorial es: %i\n",1);
	}
	for(int i=1; i<=n; i++){
		fact=fact*i;
		sum=sum+fact;
		printf("%i El factorial es: %i\n",i,fact);
	}
	printf("La suma de los factoriales es: %i\n",sum);
	return 0;
}


