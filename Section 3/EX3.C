#include <stdio.h>

int exibirTabuada(int n){
	int i;
	do{
		i += 1;
		printf("%d\n",i);
	}while(i < n);
}

int main(){
	int n;
	
	printf("Digite seu número: ");
	scanf("%d", &n);
	
	exibirTabuada(n);
	printf("\nFIM!\n");
}