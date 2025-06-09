#include <stdio.h>
#define MAX 10

int main(){
	int numeros[MAX] = {5, 3, 7, 80, 2, 14, 7};
	int tam = 7;
	int maior, menor;
	int i;
	
	menor = numeros[0];
	maior = numeros[0];
	for(i = 0; i < tam; i++){
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		
		if(numeros[i] < menor){
			menor = numeros[i];
		}
	}
	
	printf("\nMenor: %d", menor);
	printf("\nMaior: %d", maior);
	
	
	return 0;

}