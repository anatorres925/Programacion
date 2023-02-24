#include <stdio.h>
#include <string.h>
#define MAX_LONG_STRING 50



int main (){
	
	printf ("                          NOMINA  \n \n "  );
	
	
	
	char name[MAX_LONG_STRING];
	float salary, porcentage, increase;
	printf ("Ingrese el nombre del colaborador: ");
	fgets(name, MAX_LONG_STRING, stdin);
	
	if((strlen (name) > 0) && (name[strlen (name) -1 ] == '\n')) {
		name[strlen(name) -1] = '\0';
	}
	
	printf ("Ingrese el salario del colaborador: ");
	scanf ("%f", &salary);
	
	if (salary < 1000000 ){
		increase += salary * 0.07;
		porcentage = 0.07 * 100;
	} else if (salary >= 1000000 && salary <= 1500000 ) {
		increase += salary * 0.10;
		porcentage = 0.10 * 100;
	}else {
		increase += salary * 0.12;
		porcentage = 0.12 * 100;
	}
	
	
	printf ("El aumento fue del  %.0f%%, que equivale a $ %.0f ", porcentage, increase);
	printf ("El nuevo salario de %s es de %0.f", name, salary);
	
	return 0;
}
