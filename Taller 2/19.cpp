#include<stdio.h>
#include<conio.h>

int main (){
	
	int num, cont=0, i, resd;
	
	printf("Ingrese un numero entero: ");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		resd=num%i;
		if(resd==0){
			cont=cont+1;
		}
	}
	if (cont==2){
		printf("%i ES PRIMO",num);
	}
	else{
		printf("%i NO ES PRIMO",num);
	}
}
