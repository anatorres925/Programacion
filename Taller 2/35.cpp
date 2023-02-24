#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1, num2, prod;
	
	printf ("Ingrese el numero 1:\n",num1);
	scanf("%i", &num1);
	
	printf ("Ingrese el numero 1:\n",num2);
	scanf("%i", &num2);
	
	while (num1>9){
		num1=num1/10;
		while (num2>9){
			num2=num2/10;
			
		}
	}
	prod=num1*num2;
	printf("El producto mutuo del primer digito de cada numero es: %i",prod);
}

