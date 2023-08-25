/*
Fabrizio, De Biaggio. 2023
Crear una funci�n que dado el radio devuelva la longitud de la circunferencia o el
�rea del c�rculo o el volumen de la esfera, trav�s de un segundo par�metro que
seleccione cualquiera de estas tres opciones
*/

#include <stdio.h>
#define pi 3.14
double calculadora(float radio, int opcion){
	float longitud, area, volumen;
	
	if(opcion == 1){
		longitud = 2 * pi * radio;
		return longitud;
	}
	else if(opcion == 2){
		area = pi * (radio * radio);
		return area;
	}
	else if(opcion == 3){
		volumen = 4 / 3 * pi * (radio * radio * radio);
		return volumen;
	}
	return 0.0;
}
	
	int main(){
		float radio;
		int opcion;
		
		printf("Ingrese el radio: ");
		scanf("%f", &radio);
		
		printf("Hay 3 opciones para realizar el calculo\n- 1) Calcular la longitud de la circunferencia\n- 2) Calcular el area del circulo\n- 3) Calcular el volumen de la esfera\n");
		
		printf("Ingrese la opcion a calcular: ");
		scanf("%d", &opcion);
		
		float calculo = calculadora(radio, opcion);
		
		printf("El calculo elegido fue %d y el resultado es %.2f", opcion, calculo);
		
		return 0;
	}
