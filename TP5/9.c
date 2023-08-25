/*
Fabrizio, De Biaggio. 2023
Crear una función que devuelva la distancia entre 2 puntos en el espacio, ingresando
las coordenadas x, y, z de cada punto como argumentos de la función.
*/

#include <stdio.h>
#include <math.h>
float calculador_distancia(float x1, float x2, float y1, float y2, float z1, float z2){
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
}
	
	int main(){
		float x1=0, x2=0, y1=0, y2=0, z1=0, z2=0, distancia = 0;
		
		printf("Ingrese el valor de X1: ");
		scanf("%f", &x1);
		printf("\nIngrese el valor de X2: ");
		scanf("%f", &x2);
		printf("\nIngrese el valor de Y1: ");
		scanf("%f", &y1);
		printf("\nIngrese el valor de Y2: ");
		scanf("%f", &y2);
		printf("\nIngrese el valor de Z1: ");
		scanf("%f", &z1);
		printf("\nIngrese el valor de Z2: ");
		scanf("%f", &z2);
		
		distancia = calculador_distancia(x1, x2, y1, y2, z1, z2);
		
		printf("El vector resultante de los tres puntos es %.2f",distancia);
		
		return 0;
	}
