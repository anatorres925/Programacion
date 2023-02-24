#include<stdio.h>
#include<conio.h>

int main(){
	
int a=0, b=1, t, i;

for(i=1; i<100; i++){
	
    t = a + b;
    a = b;
    b = t;
	}
	printf("La suma de los valores comprendidos entre 0 y 100 es: %i",b);
	return 0;
}
