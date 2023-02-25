#include<stdio.h>
#include<conio.h>

int main() {
	
	int contador1=0, contador2=0, contprimo1=0, contprimo2=0, dig1, residuo1, dig2, residuo2, i, num1, num2;
		
	printf("Ingrese dos numeros enteros: \n");
	scanf("%i %i",&num1,&num2);
	
	while (num1>0) {
		contador1 = 0;
		dig1 = num1-(num1/10*10);
		for (i=1;i<=dig1;i++) {
			residuo1=dig1%i;
			if (residuo1==0) {
				contador1 = contador1+1;
			}
		if (contador1==2) {
			contprimo1 = contprimo1+1;
		}
		num1 = num1/10;
		}
	}
	
	while (num2>0) {
		contador2 = 0;
		dig2 = num2-(num2/10*10);
		for (i=1;i<=dig2;i++) {
			residuo2=dig2%i;
			if (residuo2==0) {
				contador2 = contador2+1;
			}
		if (contador2==2) {
			contprimo2 = contprimo2+1;
		}
		num2 = num2/10;
		}
	}

	if (contprimo1>contprimo2) {
		printf("El primer numero tiene mayor cantidad de primos");
	} 
	else {
		printf("El segundo numero tiene mayor cantidad de primos");
		} 
		
	return 0;
}

