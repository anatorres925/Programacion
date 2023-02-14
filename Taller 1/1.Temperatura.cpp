#include <stdio.h>
#include <iostream>

/*MULTIPLICAR LOS GRADOS POR 1,8 Y SUMARLE 32*/

using namespace std;

int main(){
	
	double x, c;
	
	
	cout << "Ingrese la cantidad de grados celsius que desea convertir: " << endl;
	cin >> c;
	
	x = 9/5 * c + 32;
	
	cout <<"\n" << c << " Grados celcius equivalen a " << x << " grados Fahrenheit";
	
	
	return 0;
}
