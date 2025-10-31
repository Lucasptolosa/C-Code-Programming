#include <stdio.h>

int main(){
	int a = 0; // Declaração da variável
	a++; // Aqui 'a' vale 1
	printf("a = %d\n", a);
	++a; // Aqui 'a' vale 2
	printf("a = %d\n", a);
	
	int b;
	b = 10 + a++; //Aqui é usado o valor antigo de 'a', então é 10 + 2, depois é somado 1 a 'a', que vira 3.
	printf("a = %d, b = %d\n", a, b); // a = 3 b = 12
	
	int c;
	c = 10 + ++a; // Aqui se soma 'a' já com 1 incrementado, então fica 10 + 4, sendo c = 14 e a = 4
	printf("a = %d, c = %d\n",a , c); // a = 4   c = 14
	
	return 0;
}