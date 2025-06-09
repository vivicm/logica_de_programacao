#include <stdio.h>
#define MAX 10

int main(){
	int vetor[MAX] = {1, 2, 3, 4, 5, 6};
	int i, tam = 6;
	
	/*
	for(i = 0; i < tam; i++){
		printf("\nDigite o %do valor: ", i + 1);
		scanf("%d", &vetor[i]);
	}*/
	
	for(i = 0; i < tam; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	for(i = tam - 1; i > -1; i--){
		printf("%d ", vetor[i]);
	}
	
	printf("\n");
	for(i = 0; i < tam; i++){
		printf("%d ", vetor[tam - 1 - i]);
	}
	printf("\n");
	
	
	
	
	
	
	
	
	
	return 0;
}