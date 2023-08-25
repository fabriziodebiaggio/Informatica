/*Fabrizio, De Biaggio.2023
Hacer un programa en C que lea 5 valores de muestras de un ensayo, calcule el
promedio y el valor cuadrático medio del error respecto al promedio
*/

#include <stdio.h>
#include <math.h>
int main(){
	float v_muestra[5];
	float promedio = 0, v_cuadratico = 0, error = 0;
	
	printf("Ingrese los valores de la muestra\n");
	for(int i = 0; i < 5; i++){
		scanf("%f", &v_muestra[i]);
		promedio += v_muestra[i];
		v_cuadratico += v_muestra[i] * v_muestra[i];
	}
	promedio = promedio / 5;
	printf("El promedio de los 5 valores ingresados es de %.2f\n", promedio);
	error = sqrt(v_cuadratico / 5);
	printf("El error cuadratico de los valores medidos es de %.2f\n", error);
}
