#include<stdio.h>
#include<conio.h>

int main(){
	
int a=0, b=1, t, i, prom;

for(i=1; i<1000; i++){
	
    t = a + b;
    a = b;
    b = t;
    
	}
	prom=b/1000;
	printf("El promedio entero de la suma de los valores comprendidos entre 0 y 1000 es: %i",prom);
	return 0;
}
