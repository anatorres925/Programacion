#include<stdio.h>
#include<conio.h>

int main (){
	
	int cont=0, num, ori, dig;
	
	printf("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	ori=num;
	
	while (num!=0){
		dig=num-(num/10*10);
		if (dig==1){
			cont=cont+1;
		}
		num=num/10;
	}
	printf("El numero %i tiene un total de %i vez/veces el numero 1",ori,cont);
}
