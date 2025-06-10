#include <stdio.h>
#include <math.h>

int main(){
    int tam = 10;
    int i;
    int k;
    float array[10] ={1, 4, 5, 7, 18, 3, 9, 10, 15, 11};
    float soma[10];
   
  
//testando com soma
/*
    for(i = 0; i < tam; i++){

        printf("%d ", array[i]);
        soma[i] = array[i] + 1;

       
    
    for(k = 0; k < tam; k++){soma[k] = array[i] + 1;printf("%d ", soma[k]);} 
    }
        printf("\n");

    for(i = 0; i < tam; i++){

        printf("%d ", soma[i]);


    
    }

*/

//usando a função pow

    for(i = 0; i < tam; i++){

        printf("%3.f ", array[i]);
        soma[i] = pow(array[i], 2);

    }
        
    printf("\n");

    for(i = 0; i < tam; i++){

        printf("%3.f ", soma[i]);
    
    }



    return 0;
}