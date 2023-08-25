/*Fabrizio, De Biaggio. 2023
Programa para calcular el factorial de un numero N*/

#include <stdio.h>
int main(){
	int numero;
	long int factorial;
	printf("Ingrese un numero para calcular su factorial: \n"); 
	scanf("%d", &numero);
	factorial = numero;
	for(int i = 1; i < numero; i++){
		factorial *= i;
	}
	printf("El factorial del numero %d es: %d", numero, factorial);
	return 0;
}
