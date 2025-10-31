#include <stdio.h>

int main(){
	int a = 4, b = 3; // Declaração de duas variáveis ao mesmo tempo.
	float c; 
	c = a / b; // Como 'a' e 'b' são inteiros, o resultado da divisão terá apenas a parte inteira do quociente.
	printf("c = %f\n", c);
	
	float x = 4, z;	 /* É a mesma coisa que fazer
       				 float x = 4  e float = z */
    z = x / b; // z = 4 / 3
	printf("z = %f\n", z); // Resultado em número quebrado.
	
	return 0;
}