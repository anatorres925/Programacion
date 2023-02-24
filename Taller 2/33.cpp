#include<stdio.h>
#include<conio.h>

int main (){
	
	int b=1, cont=0, i, primo;
	
	while (b<=32768){
		for(i=1; i<b; i++){
			if (b%i==0){
				cont=cont+1;
			}
		if (cont==2){
			primo=b;
		}
		b=b+1;
		}
	printf("%i",primo);
	}
}

