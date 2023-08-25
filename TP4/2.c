/*
Fabrizio De Biaggio. 2023
Realizar un programa donde se ingresen 10 números reales a un arreglo y luego se
calcule la suma y el promedio de los elementos de índice par y lo mismo para los
elementos de índice impar

*/
#include <stdio.h>
#include <math.h>

int main(){
	float numeros[10], suma, p_par, p_impar;
	float suma_par, suma_impar;
	int n_enteros[10];
	printf("Ingrese 10 numeros para calcular la suma total y el promedio de los pares e impares\n");
	for(int i = 0; i < 10; i++){
		scanf("%f", &numeros[i]);
		suma += numeros[i];
		
		n_enteros[i] = (int)numeros[i];
		if(n_enteros[i] % 2 == 0){
			suma_par += n_enteros[i];
		}
		else {
			suma_impar += n_enteros[i];
		}
		
	}
	printf("La suma de todos los numeros ingresados es %.2f\n\n", suma);
	p_par = suma_par / 10;
	printf("El promedio de los numeros pares es de %.2f\n", p_par);
	p_impar = suma_impar / 10;
	printf("El promedio de los numeros impares es de %.2f", p_impar);
	
	if(suma_par == 0){
		printf("No se ingresaron numeros pares\n");
	}
	else if(suma_impar == 0){
		printf("No se ingresaron numeros impares\n");
	}
}
