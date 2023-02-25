#include<stdio.h>
#include<conio.h>

int main(){
	
	int prom=0, dig, cont=0, num;
	
	printf ("Ingrese un numero entero:\n");
	scanf("%i",&num);
	
	int ori=num;
	
	while (num!=0){
		dig=num-(num/10*10);
		prom=prom+dig;
		cont=cont+1;
		num=num/10;
	}
	
	printf("El promedio entero de los digitos de %i es: %i",ori,(prom/cont));
	
}
