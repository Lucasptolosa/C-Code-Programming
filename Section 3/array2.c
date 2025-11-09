#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10] = {1,2,3,4,5,6,7,8,9,0};
	
	for (int i = 0; i < 10; i++){
		printf("%d\n", vetor[i]);
	}
	
	system("pause");
	return 0;
}