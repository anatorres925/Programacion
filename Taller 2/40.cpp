#include<stdio.h>
#include<conio.h>

int main (){
	
	int n, penultimo=0, ultimo=1;
	
	printf("Digite un numero de dos digitos:\n ");
	scanf("%i",&n);
	
	if (n>9 && n<=99){
		penultimo=0;
		ultimo=1;
		
		while (ultimo<n){
			penultimo=penultimo+ultimo;
        	ultimo=penultimo+ultimo;
		}
		
		if(n==ultimo){
			printf("El numero si pertenece a la serie de Fibonacci\n");
		}
		else{
			printf("El numero no pertenece a la serie de Fibonacci\n");
		}
	}
	else{
		printf("Ingrese un numero de 2 digitos");
	}
	return 0;
}


