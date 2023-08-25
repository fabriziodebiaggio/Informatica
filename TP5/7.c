/*
Fabrizio, De Biaggio. 2023
Realizar una función que devuelva el factorial de un número entero, ingresando el
número como argumento.
*/

#include <stdio.h>

int factorial(int numero){
	int calculo = numero;
	for(int i = 1; i < numero; i++){
		calculo = calculo * i;
	}
	
	return calculo;
}
	
	int main(){
		int numero = 0, numero_factorial = 0;
		
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		
		numero_factorial = factorial(numero);
		
		printf("\nEl factorial del numero %d es %d", numero, numero_factorial);
		
		return 0;
	}
