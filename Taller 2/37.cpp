#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j;
	
	for (i=1; i<=10; i++){
		printf("\n\tTABLA DEL %i\n", i);
		for(j=1; j<=10; j++){
		printf("\n  %i * %i = %i", i, j, i*j);	
		
		}
		printf("\n---------------------------");
		
	}
	return 0;
}


