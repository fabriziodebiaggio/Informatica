/*
Fabrizio, De Biaggio
Crear una funci�n que permita calcular la potencia en�sima (exponente entero) de
un n�mero real (float). No utilizar la funci�n de la librer�a math.
*/
#include <stdio.h>
double potencia_n(float numero, int potencia){
	float resultado_p = 0;
	
	if(potencia > 0){
		for(int i = 1; i <= potencia; i++){
			resultado_p = numero * numero;
		}
	}
	
	return resultado_p;
}
	
	int main(){
		float numero_real = 0, resultado = 0;
		int potencia = 0;
		printf("Ingrese el valor del numero real: ");
		scanf("%f", &numero_real);
		printf("\nIngrese el valor de la potencia: ");
		scanf("%d", &potencia);
		
		resultado = potencia_n(numero_real, potencia);
		
		printf("\nLa potencia %d del numero %.2f es de %.2f", potencia, numero_real, resultado);
		
		return 0;
	}
