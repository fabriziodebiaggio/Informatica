/*Fabrizio, De Biaggio. 2023
Programa que muestra 50 valores de la función:
y=sen(x)+0.7cos(2x)+0.5sen(3x) 
entre x=0 y x=4 pi
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	float x = 0, y =0;
	float aumento = (4*PI)/50;
	for(int i = 0; i<=50; i++){
		y= sin(x)+0.7*cos(2*x)+0.5*sin(3*x);
		printf("%f\n",y);
		x = x + aumento;	
	}
}
