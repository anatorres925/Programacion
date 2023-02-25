#include<stdio.h>
#include<conio.h>

int main (){
	
	int num1, num2, i, resd;
	
	printf("Ingrese dos numeros enteros: \n");
	scanf("%i %i",&num1, &num2);
	
	if (num1<num2){
		for(i=num1; i<=num2; i++){
			resd=i%5;
			if(resd==0){
				//printf("Los multiplos de 5 comprendidos entre el numero menor es: %i",i);
				printf("%i-",i);
			}
		}
	}
	
	if (num2<num1){
		for(i=num2; i<=num1; i++){
			resd=i%5;
			if(resd==0){
				//printf("Los multiplos de 5 comprendidos entre el numero menor es: %i",i);
				printf("%i-",i);
			}
		}
	}
	
	if (num1==num2){
		printf("Los numeros son iguales");		
	}
}
