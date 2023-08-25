/*Fabrizio, De Biaggio. 2023
Programa para calcular circuferencia, área del círculo o volumen de la esfera a 
partir del radio.
Usando switch.*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	float radio=0;
	char opcion;
	float long_circ = 0;
	float area = 0;
	float vol = 0;
	int opcion_posible = false;
	printf("Igrese el radio de un circulo: \n");
	scanf("%f", &radio);
	printf("Ahora indique la opcion de calculo:\nA)Longitud de la circunferencia.\nB)Area del circulo.\nC)Volumen de la esfera.\n");
	while(opcion_posible == false){
	scanf(" %c", &opcion);
	switch (opcion){
		case 'A':
		case 'a':
			long_circ = 2*PI*radio;
			printf("La longitud de la circunferencia es: %f", long_circ);
			opcion_posible = true;
			break;
		case 'B':
		case 'b':
			area = PI*radio*radio;
			printf("El area de la circunferencia es: %f",area);
			opcion_posible = true;
			break;		
		case 'C':
		case 'c':
			vol =(4/3)*PI*radio*radio*radio ;
			printf("El volumen de la esfera es: %f",vol);
			opcion_posible = true;
			break;
		default:
			printf("Por favor ingrese una opción posible.\n");
			break;
		}	
	}	
}
