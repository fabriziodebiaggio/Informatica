/*
Fabrizio, De Biaggio
Hacer un programa en C donde se lean las notas de 10 alumnos, ingresadas por
teclado y determine la cantidad de alumnos que tuvieron notas por encima del
promedio y la cantidad de alumnos por debajo del promedio.
*/

#include <stdio.h>
int main(){
	float alumnos[10], p_notas;
	
	for(int i = 0; i < 10; i++){
		printf("Ingrese la nota del alumno %d: ", i+1);
		scanf("%f", &alumnos[i]);
		if(alumnos[i] < 1 || alumnos[i] > 10){
			printf("Por favor ingrese una nota comprendida entre 1 y 10\n");
			i--;
		}
		p_notas += alumnos[i];
	}
	printf("\n");
	p_notas = p_notas / 10;
	for (int i = 0; i < 10; i++){
		if(alumnos[i] >= p_notas){
			printf("El alumno %d tuvo una nota por encima del promedio\n", i+1);
		}
		else {
			printf("El alumno %d tuvo una nota por debajo del promedio\n", i+1);
		}
	}
}
