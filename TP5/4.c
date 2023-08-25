/*Fabrizio, De Biaggio. 2023
Crear una funcion que devuelva el numero menor de 3 numeros enteros 
ingresados, como argumento de la funcion*/
#include <stdio.h>
int numero_menor(int valor1, int valor2, int valor3){
	int min;
	if(valor1 < valor2){
		if(valor1 < valor3){
			min = valor1;
		}
		else{
			min = valor3;
		}
	}
	else{
		if(valor2 < valor3){
			min = valor2;
		}
		else{
			min = valor3;
		}
	}
	return min;
}
	
	int main(){
		int valor1=0, valor2=0, valor3=0;
		printf("Ingrese 3 valores\n");
		scanf("%d %d %d", &valor1, &valor2, &valor3);
		printf("El numero menor es: %d\n", numero_menor(valor1, valor2, valor3));
		return 0;
	}
