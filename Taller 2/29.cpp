#include<stdio.h>
#include<conio.h>

int main() {
	int num;
	printf ("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	while (num>=10) {
		num = num/10;
	}
	printf("\nEl primer digito es: %i",num);
	
	return 0;
}

