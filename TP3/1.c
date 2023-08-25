/*Fabrizio, De Biaggio. 2023
Programa para calcular circuferencia, área del círculo o volumen de la esfera a 
partir del radio. 
Usando else if*/
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
	printf("Igrese el radio del circulo: \n");
	scanf("%f", &radio);
	printf("Ahora indique la opcion de calculo:\nA)Longitud de la circunferencia.\nB)Area del circulo.\nC)Volumen de la esfera.\n");
	while (opcion_posible == false){
		scanf(" %c", &opcion);
		if (opcion== 'A' || opcion == 'a'){
			long_circ = 2*PI*radio;
			printf("La longitud de la circunferencia es: %f", long_circ);
			opcion_posible = true;
		}
		
		else if (opcion == 'B' || opcion == 'b'){
			area = PI*radio*radio;
			printf("El area de la circunferencia es: %f",area);
			opcion_posible = true;
		}
		
		else if (opcion == 'C' || opcion == 'c'){
			vol =(4/3)*PI*radio*radio*radio ;
			printf("El volumen de la esfera es: %f",vol);
			opcion_posible = true;
		}
		else{
			printf("Por favor ingrese una de las opciones posibles.\n");
		}
	}
}
