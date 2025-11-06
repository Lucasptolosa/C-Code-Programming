//Estrutura de Decições

#include <stdio.h>

int main(){
	int total;
	printf("Total de aulas: ");
	scanf("%d", &total);
	
	int presencas;
	printf("Presenças: ");
	scanf("%d", &presencas);
	
	float p = 1.0 * presencas / total;
	if (p >= 0.75)
	{
		printf("Dentro do limite de faltas!\n");
	}
	else
	{
		printf("Reprovado por faltas.\n");
	}
	printf("Fim!");
	
	return 0;
}