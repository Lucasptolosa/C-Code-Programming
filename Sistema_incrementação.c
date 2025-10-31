// Operador Decremento
// Decrementa o valor de uma váriavel em 1 unidade

#include <stdio.h>

int main(){
	int x = 2;
	
	x *= ++x; //aqui fica x = x * x onde em x, é incrementando 1 antes, então fica 3 * 3
	printf("x = %d\n", x);
	
	int y = 4;
	y *= 10 + y--; // Aqui o compilador pode ficar meio instavel - é possível que y vire 3 no meio da expressão OU logo após, portanto ambos os resultados 42 e 56 são verdadeiros.
	printf("y = %d\n", y);
}