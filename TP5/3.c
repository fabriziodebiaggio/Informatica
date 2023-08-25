/*Fabrizio, De Biaggio. 2023
Programa para calcular la R equivalente con la expresion 1 sobre la sumatoria de 1 sobre Rn*/

#include <stdio.h>
double valor_requiv(float R1, float R2, float R3){  
	float denominador = (1 / R1) + (1 / R2) + (1 / R3);
	float res_equivalente = 1 / denominador;
	
	printf("\nEl valor de la resistencia equivalente es de: %.2f", res_equivalente);
}
	
	int main(){
		float R1, R2, R3;
		
		printf("Ingrese el valor de R1: ");
		scanf("%f", &R1);
		printf("\nIngrese el valor de R2: ");
		scanf("%f", &R2);
		printf("\nIngrese el valor de R3: ");
		scanf("%f", &R3);
		
		valor_requiv(R1, R2, R3);
		
		return 0;
	}
