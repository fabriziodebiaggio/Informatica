/*
Fabrizio, De Biaggio. 2023
Crear una funci�n que devuelva la distancia entre 2 puntos en el plano, ingresando
las coordenadas x e y de cada punto como argumentos de la funci�n.
*/

#include <stdio.h>
#include <math.h>

double distancia(float x1, float x2, float y1, float y2){
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
	
	int main(){
		float x1, x2, y1, y2, vector;
		
		printf("Ingrese X1: ");
		scanf("%f", &x1);
		
		printf("\nIngrese Y1: ");
		scanf("%f", &y1);
		
		printf("\nIngrese X2: ");
		scanf("%f", &x2);
		
		printf("\nIngrese Y2: ");
		scanf("%f", &y2);
		
		vector = distancia(x1, x2, y1, y2);
		
		printf("\nLa distancia entre los puntos ingresados es de %.2f", vector);
		
		return 0;
	}
