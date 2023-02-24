#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int c;
	
	for (a=1; a<10; a++) {
		for (b=1; b<4; b++) {
			for (c=1; c<4; c++){
				printf("\n%i %i %i  ", a, b, c);
				a++;
			}
		}
	}
	return 0;
}



