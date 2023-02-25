#include<stdio.h>
#include<conio.h>

int main (){
	
	int num, ori, cont=0;
	
	printf("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	ori=num;
	
	while (num!=0){
		num=num/10;
		cont=cont+1;
	}
	
	printf ("El numero %i tiene %i digitos",ori,cont);
	
}
