// Void
/* Void significa 'nada'
ele é utilizado para dizer 'essa função não devolve nada'
*/

//Void como retorno

#include <stdio.h>
#include <stdlib.h>

void mensagem(){ // Isso serve apenas para DEFINIR a função. Ela guarda/imprime a mensagem, mas não guarda nada - portanto - não precisa de return.
	printf("Olá\n");
}

//Caso eu desejase fazer a mesma função mas com CHAR, então eu preciso dar retunrn na função

void linha(int n){
	for(int j=1; j <=n; j++){
		printf("\xDB"); // ? caractere ¦ em ASCII
	}
	printf("\n"); // quebra linha
}

int main(){ // Escritor de ASCII em C
	linha(20); // chamada da função
	printf("\xDB UM PROGRAMA EM C \xDB\n");
	linha(20); // chamada da função
	system("pause");
	return 0;
}