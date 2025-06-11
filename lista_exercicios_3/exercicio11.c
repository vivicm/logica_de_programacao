#include <stdio.h>
#define MAX 20

//11)	 Crie um array com pelo menos 20 números inteiros positivos menores do que 10. Então, o programa deverá mostrar quantas vezes cada um desses números aparece no array. Mostre na tela o número e quantas vezes ele apareceu (mostre apenas uma vez para cada número diferente).

//float array[MAX] = {1.5044, 1.693, 2.1108, 2.2032, 2.2663, 3.0243, 3.0574, 3.7047, 4.6824, 5.1517, 5.242, 6.2376, 6.2978, 6.7176, 6.8761, 7.1282, 7.2717, 8.2461, 8.7218, 9.9551};

/*
int array[MAX] = {1, 2, 3, 4};

int i;
int tam = 20;
int num_1 = 0;

int main(){


    for(i = 0; i < 4; i++){
         
        if(array[i] = 1){
           printf("%d ", array[i+++]); 
            num_1++;
            

        }
        
    }
    printf("\n %d ", num_1);

    return 0; 
}
*/


int main() {
   // int numeros[20] = {2, 5, 1, 2, 8, 4, 2, 3, 5, 0, 7, 9, 1, 4, 3, 2, 5, 0, 6, 3};
    int array[MAX] = {1.5044, 1.693, 2.1108, 2.2032, 2.2663, 3.0243, 3.0574, 3.7047, 4.6824, 5.1517, 5.242, 6.2376, 6.2978, 6.7176, 6.8761, 7.1282, 7.2717, 8.2461, 8.7218, 9.9551};
    int frequencia[10] = {0}; 

 
    for(int i = 0; i < 20; i++) {
        frequencia[array[i]]++;
    }

   
    printf("Frequencia dos numeros:\n");
    for(int i = 0; i < 10; i++) {
        if(frequencia[i] > 0) {
            printf("Numero %d apareceu %d vez(es)\n", i, frequencia[i]);
        }
    }

    return 0;
}

// tentar fazer esse código usando while??