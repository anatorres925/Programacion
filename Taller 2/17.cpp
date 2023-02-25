#include<stdio.h>
#include<conio.h>

int main (){
	
	int x, y, numx, numy, num, cont, prom, ty=0, tx=0;
	
	printf("Ingrese un numero para los primeros multiplos de 2: ");
	scanf("%i",&x);
	
	printf("Ingrese un numero para los primeros multiplos de 5: ");
	scanf("%i",&y);
	
	numx=x;
	numy=y;
	
	num=1;
	cont=0;
	prom=0;
	
	while(cont!=x){
		if(num%2==0){
			cont=cont+1;
			prom=prom+num;
		}
		num=num+1;
		if(num>numx){
			x=cont;
			numx=x-1;
		}
	}
	
	if (x<numx){
		tx=(prom/cont);
		printf("%i",tx);
	}
	else{
		printf("Los primeros %i multiplos sobrepasan",x);
	}
	
	num=1;
	cont=0;
	prom=0;
	
	while(cont!=y){
		if(num%5==0){
			cont=cont+1;
			prom=prom+num;
		}
		num=num=1;
		if (num>numy){
			y=cont;
			numy=y-1;
		}
	}
	
	if (y<numy){
		ty=prom/cont;
		printf("%i",ty);
	}	
	else{
		printf("Los primeros %i multiplos sobrepasan");
	}
	
	if (tx>ty){
		printf("El promedio: %i",prom);
	}
	
}
