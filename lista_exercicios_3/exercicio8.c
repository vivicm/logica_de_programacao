#include <stdio.h>
#define MAX 20
int main(){
	int numeros[MAX] = {3, -9, -6, 0, 12, 0, 15, -2, 100, 14};
	int positivos[MAX], negativos[MAX];
	int i, j = 0, k = 0, tam = 10;
	
	for(i = 0; i < tam; i++){
		if(numeros[i] > 0){
			positivos[j++] = numeros[i];
		}
		else{
			if(numeros[i] < 0){
				negativos[k++] = numeros[i];
			}
		}
	}
	
	j = 12;
	printf("j = %d\n", j++);
	printf("j = %d\n", j);
	printf("j = %d\n", ++j);
	printf("j = %d\n", j++);
	printf("j = %d\n", j);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}