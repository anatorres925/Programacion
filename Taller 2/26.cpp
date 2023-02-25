#include<stdio.h>
#include<conio.h>

int main (){
	
	int dig=0, mayor=0, num;
	
	printf("Ingrese un numero entero:\n");
	scanf("%i",&num);
	
	while (num!=0){
		dig=num-(num/10*10);
		if (dig>mayor){
			mayor=dig;
		}
		num=num/10;
	}
	printf ("El mayor digito es: %i",mayor);
	
}
