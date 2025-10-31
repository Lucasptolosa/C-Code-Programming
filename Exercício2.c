// Ex2
/* Escreva um programa que peça para o usuário fornecer o valor do
raio de um círculo, e a seguir calcule e imprima na tela a área e o
perímetro deste círculo. Observação: Assuma que o valor de PI é
3.1415926.*/

#include <stdio.h>

int main(){
	float r;
	float pi = 3.1415926;
	float area;
	float perimetro;
	
	printf("Valor do raio: ");
	scanf("%f", &r);
	
	area = pi * r * r;
	perimetro = 2 * pi * r;
	
	printf("Sua área é mede %.2f unidades e o perimetro %.2f unidades", area, perimetro);
}