#include<stdio.h>
#include<conio.h>

int main(){
	
	int suma=0, cont=0, dig, num;
	
	scanf("%i",&num);
	
	while (num!=0){
		dig=num-(num/10*10);
		if (dig==5){
			suma=suma+num;
			cont=cont+1;
		}
		scanf("%i",&num);
	}
	if (cont>0){
		printf("El promedio de los numeros que termina en 5 es: %i",(suma/cont));
	}
	else{
		printf("No escribio numeros que terminen en 5");
	}
	
	
}
