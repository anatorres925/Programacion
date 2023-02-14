#include <stdio.h>

int main(){
	int b,h,a;
	printf ("Ingrese la base del triangulo: ");
	scanf("%d",&b);
	
	printf ("Ingrese la altura del triangulo: ");
	scanf ("%d",&h);
	
	a = (b*h)/2;
	printf("El area del triangulo es: %d", a);
	
	return 0;
	
	
}
