#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int c;
	c = 0;
	for (b=1;b<=2;b++) {
		for (a=0;a<=3;a++) {
			printf("\n%i %i  ", c, b);
			c=c+1;
		}
	}
	return 0;
}

