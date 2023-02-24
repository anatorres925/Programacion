#include<stdio.h>
#include<conio.h>

int main(){
	
	int num, i;
	
	printf("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	printf("\n  La tabla de multiplicar del %i es:\n", num);
	
	for (i=1; i<=10; i++){
		printf("\n  %i * %i = %i", i, num, i*num);
	}
	return 0;
}


