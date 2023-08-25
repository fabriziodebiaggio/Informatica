/*Fabrizio, De Biaggio. 2023
Programa que calcula el promedio de 10 numeros ingresados por teclado*/
#include <stdio.h>
int main(){
	int numeros[10], suma=0;
	printf("Ingrese 10 números reales para calcular el promedio de estos \n");
	for(int i =0; i < 10; i++){
		scanf("%d", &numeros[i]);
		suma = suma + numeros[i];
	}
	float promedio = suma / 10;
	printf("El promedio es: %.2f", promedio);
	return 0;
}
