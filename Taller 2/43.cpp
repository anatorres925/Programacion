#include<iostream>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int cont;
	a = 0;
	b = 1;
	cont = 0;
	while (b<=100) {
		if (b>=1000 && b<=2000) {
			cont = cont+1;
		}
		c = a+b;
		a = b;
		b = c;
	}
	cout << cont << endl;
	return 0;
}

