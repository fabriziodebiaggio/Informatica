/*
Fabrizio, De Biaggio. 2023
Crear una función que devuelva el valor a pagar de una compra con descuento,
introduciendo el precio (valor) de la compra y el descuento en porcentaje que se
realiza.
*/

#include <stdio.h>

float precio_descuento(float precio, float porcentaje){
	float descuento = precio * (porcentaje / 100);
	
	return precio - descuento;
}
	
	int main(){
		float precio, porcentaje;
		
		printf("Ingrese el precio de la compra: ");
		scanf("%f", &precio);
		printf("Ingrese el porcentaje de descuento a efectuar: ");
		scanf("%f", &porcentaje);
		
		float descuento = precio_descuento(precio, porcentaje);
		
		printf("El precio con descuento es: $%.2f", descuento);
		
		return 0;
	}
