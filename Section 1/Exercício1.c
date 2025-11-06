// Desafios 'Introdução a linguagem'
// ex 1
/* Escreva um programa que peça para o usuário fornecer a
temperatura em graus Celsius, e a seguir calcule e imprima na tela a
temperatura correspondente em Fahrenheit*/

#include <stdio.h>

int main(){
	float c;
	float f;
	
	printf("Temperatura em celsius: ");
	scanf("%f",&c);
	
	f = (c * 1.8) + 32;
	
	printf("A temperatura corresponde a %.2f em Fahrenheit", f);	
}