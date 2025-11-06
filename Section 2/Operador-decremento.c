// Operador Decremento.
// --

//Mesma coisa que o ++, mas, é negativo

/* x--; Adiciona após a execução do código
--x; */ // Adiciona durante a execução do código

#include <stdio.h>

int main(){
	int x = 2;
	
	x *= ++x; // INCREMENTA ANTES DE USAR: x = 3 * 3
	printf("x = %d\n", x);
	
	int y = 4;
	y *= 10 + y--; // y = 3(10 + 4) -> y começa como 4, mas após a primeira linha [10 + 4], ele decrementa 3 * 14
	printf("y = %d\n", y);
	
}