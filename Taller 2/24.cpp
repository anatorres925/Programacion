#include<stdio.h>
#include<conio.h>

int main (){
	
	int num, dig, suma=0;
	
	printf ("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	int ori=num;
	
	while (num!=0){
		dig=num-(num/10*10);
		if (dig==dig/2*2){
			suma=suma+dig;
		}
		num=num/10;
	}
	
	printf("La suma de los digitos pares de %i es igual a: %i",ori, suma);
	
}
