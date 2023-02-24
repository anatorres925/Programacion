#include<stdio.h>
#include<conio.h>

int main (){
	
	int suma = 0;
	int cont = 0;
	int prom;
	int num, contadorprim, i;

	printf("Ingrese numeros \n");
	scanf("%i", num);
	
	while (num<0 && num>0){
		printf("Ingrese numeros \n");
		scanf("%i", num);
        contadorprim = 0;
        for (i=1; i<num; i++){
        	if (num%i==0){
        		contadorprim = contadorprim +1;
			}
		if (contadorprim==2){
			suma=suma+num;
			cont=cont+1;
		}
		else{
			printf("No es un primo %i",num);
		}
		scanf("%i",num);
		}
	if(cont>0){
		prom=suma/cont;
		printf("El promedio entero de todos los numeros primos es %i",prom);
		}
	}
}





