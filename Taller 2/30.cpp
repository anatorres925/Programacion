#include<stdio.h>
#include<conio.h>

int main() {
	
	int i, num;
	
	printf("Ingrese un numero para descomponer en sus multiplos: ");
	scanf("%i", &num);
	//cout << "Ingrese un numero" << endl;
	//cin >> num;
	for (i=1;i<=num;i++) {
		if (num%i==0) {
			printf("\n%i es multiplo de %i\n",num,i);
			//cout << num << " es multiplo de " << i << endl;
		}
	}
	return 0;
}

