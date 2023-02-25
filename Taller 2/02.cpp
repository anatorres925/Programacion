#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	printf("Ingrese el numero entero: \n");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("El numero ingresado es par");
	}else{
		printf("El numero ingresado es impar");
	}
	
	return 0;
	    
	
}
