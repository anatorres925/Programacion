#include<stdio.h>
#include<conio.h>

int main (){
	
	int dig, suma=0, cont=0, num, ori, resd, i;
	
	printf ("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	ori=num;
	
	while (num>0){
		dig=num-(num/10*10);
		suma=suma+dig;
		num=num/10;
	}
	for (i=1;i<=suma;i++){
		resd=suma%i;
		if(resd==0){
			cont=cont+1;
		}
	}
	if(cont==2){
		printf("La suma de los digitos de %i es igual a un numero primo",ori);
	}
	else{
		printf("La suma de los digitos de %i no es un numero primo",ori);
	}
	
	
}
