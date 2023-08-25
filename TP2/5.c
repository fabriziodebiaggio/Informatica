
/*Fabrizio, De Biaggio. 2023
Programa para determinar el menor y el mayor numero ingresado por teclado */

#include <stdio.h>
int main(){
	int n;
	int M = 0, m = 0;
	printf("Ingrese la cantidad de numeros desea ingresar: ");
	scanf("%d", &n);
	int numeros [n];
	printf("\nIngrese %d numeros para calcular el maximo y minimo\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &numeros[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(numeros[i] > M) M = numeros[i];
	}
	m = M;
	for(int i = 0; i < n; i++){
		if(numeros[i] < m) m = numeros[i];
	}
	
	printf("El numeros maximo de los ingresados es: %d\n", M);
	printf("El numero minimo de los ingresados es: %d\n", m);
	
	return 0;
	
}
	
