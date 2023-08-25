/*
Fabrizio, De Biaggio. 2023
Realizar un programa donde se rellene un arreglo con los 20 primeros números
primos. Mostrar en pantalla los elementos del arreglo.

*/
#include <stdio.h>
int main() {
	int num_primos[20], contador = 0, numero = 2; 
	while (contador < 20) {
		int es_primo = 1; 
		
		for (int i = 2; i <= numero / 2; i++) {
			if (numero % i == 0) {
				es_primo = 0; 
				break;
			}
		}
		
		if (es_primo) {
			num_primos[contador] = numero;
			contador++;
		}
		numero++;
	}	
	printf("Los primeros 20 numeros primos son: \n\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", num_primos[i]);
	}
	return 0;
}
