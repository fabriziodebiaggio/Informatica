/*
Fabrizio, De Biaggio. 2023
Realizar un programa en C que lea una cadena e indique cuantas vocales hay.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char cadena[100];
	int cantidad_de_vocales = 0;	
	printf("Ingrese una cadena de texto: ");
	fgets(cadena, sizeof(cadena), stdin);	
	int longitud = strlen(cadena);
	if(cadena[longitud - 1] == '\n'){
		cadena[longitud - 1] = '\0'; // Para eliminar el caracter final de nueva linea
		longitud--;
	}	
	for(int i = 0; i < longitud; i++){
		cadena[i] = tolower(cadena[i]); //tolower hace todo minuscula
	}	
	for(int i = 0; i < longitud; i++){
		if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u'){
			cantidad_de_vocales++;
		}
	}	
	printf("\nEn la cadena que se ingreso, hay %d vocales", cantidad_de_vocales);	
	return 0;
}
