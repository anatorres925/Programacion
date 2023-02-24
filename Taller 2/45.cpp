#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fact=1,n;
	
	printf("Digite un numero entero:\n");
	scanf("%i", &n);
	
	if(n==0){
		printf("El factorial es: %i\n",1);
	}
	for(int i=1; i<=n; i++){
		fact=fact*i;
		printf("%i El factorial es: %i\n",i,fact);
	}
	return 0;
}
