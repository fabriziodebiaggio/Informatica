/* Fabrizio, De Biaggio 
Hacer un programa que lea 10 numeros y determine cuales son divisibles por 3*/
#include <stdio.h>
int main(){
	int numeros[10];
	
	printf("Ingrese 10 numeros para calcular cuales son divisibles por 3: \n");
	for(int i = 0; i < 10; i++){
		scanf("%d", &numeros[i]);
	}
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 3 == 0){
			printf("El numero %d es divisible por 3\n", numeros[i]);
		}
	}
	return 0;
}
