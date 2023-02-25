#include<stdio.h>
#include<conio.h>

int main (){
	
	int suma, num, ori, dig;
	
	printf("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	ori=num; 
	
	while (num!=0){
		dig=num-(num/10*10);
		suma=suma+dig;
		num=num/10;
	}
	
	printf ("La suma de los digitos de %i es igual a: %i",ori,suma);
	
}
