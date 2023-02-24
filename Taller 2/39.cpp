#include <iostream>
using namespace std;

int main() {
    
	int a = 0, b = 1, sig = 0;
    
	printf("\nSERIE DE FIBONACCI\n");

    for (int i = 1; i <= 21; ++i) {
        
        if(i == 1) {
            printf("\n%i",a);
			
        }
        if(i == 2) {
        	printf("\n%i",b);
           
        }
        sig = a + b;
        a = b;
        b = sig;
        
        printf("\n%i",sig);
		
    }
    return 0;
}


