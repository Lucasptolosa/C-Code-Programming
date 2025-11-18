// Busca Linear 
// é um algoritimo que varre um vetor do início ao fim, comparando cada elemento com o valor que você está procurando.
// se encontrar, retorna a posição. Se não, diz que não existe.

#include <stdio.h>

int buscaLinear(int v[], int n, int chave){
    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            return i; // Posição encontrada
        }
    }
    return -1; // Não encontrado
}


int main(){
	int vet[] = {10, 5, 8, 20, 3};
	int tamanho = 5;
	
	int x = 20;
	
	int pos = buscaLinear(vet, tamanho, x);
	
	if (pos != -1){
		printf("Valor encontrado na posicao %d\n", pos);
	} else{
		printf("Valor não encontrado");
	}
	
	return 0;
}