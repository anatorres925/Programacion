#include <stdio.h>
#include <stdlib.h>
 
main()
{
	int a=0, b=1;
	for(int c=0; c<1; c++){
		for (int d=0; d<=9; d++){
			printf("\n%i %i  ", d, b);
			a++;
	   		if(a==2){
			   	b+=1;
			   	a=0;
	   		}
		}
   }
}
