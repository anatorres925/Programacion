#include<stdio.h>
#include<conio.h>

int main (){
	
	int num1, num2, cont1=0, cont2=0;
	
	printf("Ingrese dos numeros enteros:\n\n");
	scanf("%i %i",&num1,&num2);
	
	while (num1!= 0){
		num1=num1/10;
		cont1=cont1+1;
	}
	
	while (num2!= 0){
		num2=num2/10;
		cont2=cont2+1;
	}
	
	if (cont1>cont2){
		printf("\nEl primer numero tiene mayor cantidad de digitos");
	}
	else {
		if(cont2>cont1){
			printf("\nEl segundo numero tiene mayor cantidad de digitos");
		}
		else{
			printf("\nAmbos numeros tiene la misma cantidad de digitos");
		}
	}
}
