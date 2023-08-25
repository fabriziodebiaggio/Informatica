/*Fabrizio, De Biaggio. 2023
Programa para resolver una acuacion cuadr�tica*/

#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, x1, x2;
	
	printf( "Introduzca el coeficiente a: " );
	scanf( "%f", &a );
	
	printf( "\nIntroduzca el coeficiente b: " );
	scanf( "%f", &b );
	
	printf( "\nIntroduzca el coeficiente c: " );
	scanf( "%f", &c );
	
	d=b*b-4*a*c;
	
	if (d>=0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf ("x1 = %f \n", x1);
		printf ("x2 = %f \n", x2);
	}
	else {
		printf ("Error: raices complejas\n");
	}
}
