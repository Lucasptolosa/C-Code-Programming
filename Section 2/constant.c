// Constante

#include <stdio.h>

int main(){
	const int num = 5; // O valor do número dado permance constante sempre, independente de quaiser tentativas de mudança.]
	printf("%d\n", num);
	//num = 8; o programa se RECUSA a rodar essa nova leitura - portanto, num fica preso ao numerador 'const'
	printf("%d", num);
}