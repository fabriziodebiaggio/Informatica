/*
Fabrizio, De Biaggio. 2023
Realizar un programa que obtenga la derivada de la funci�n en un punto de la
funci�n y=sen2(x). Ingresando por teclado el valor del punto donde se har� el
c�lculo. Mostrar el valor de la derivada.
*/

#include <stdio.h>
#include <math.h>
int main(){
	float x, derivada;
	printf("Ingrese el valor del punto x para calcular la derivada: ");
	scanf("%f", &x);
	
	derivada = 2 * sin(x) * cos(x);
	
	printf("\nLa derivada del punto %.2f es %.2f", x, derivada);
	
	return 0;
}
