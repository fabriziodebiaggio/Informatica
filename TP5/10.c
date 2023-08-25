/*
Fabrizio, De Biaggio. 2023
Crear una funci�n que devuelva el n�mero de d�a del a�o, ingresando como
argumentos, el d�a, mes y a�o de la fecha.
*/

#include <stdio.h>
int calculoDia(int dia, int mes, int anio){ 
	int diaDeMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int diaActual  = 0;
	if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){ //para que un anio sea bisiesto debe ser divisible por 100 y 400
		diaDeMeses[1] = 29;
	}
	
	for(int i = 0; i < mes; i++){
		diaActual += diaDeMeses[i];
	}
	
	return diaActual + dia;
}
	
	int main(){
		int dia = 0, mes = 0, anio = 0, diaDelAnio = 0;
		
		printf("Ingresa el numero del dia: ");
		scanf("%d", &dia);  
		
		printf("\nIngresa el numero del mes: ");
		scanf("%d", &mes);
		
		printf("\nIngresa el numero de a�o: ");
		scanf("%d", &anio);
		
		if(dia < 0 || dia > 31){
			printf("\nDia invalido, ingresalo nuevamente: ");
			scanf("%d", &dia);
		}
		if(mes < 0 || mes > 12){
			printf("\nMes invalido, ingresalo nuevamente: ");
			scanf("%d", &mes);
		}
		if(anio < 0){
			printf("\nA�o invalido, ingresalo nuevamente: ");
			scanf("%d", &anio);
		}
		
		diaDelAnio = calculoDia(dia, mes, anio);
		
		printf("\nEstas en el dia %d del a�o", diaDelAnio);
		
		return 0;
	}
