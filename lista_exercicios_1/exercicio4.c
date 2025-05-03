#include <stdio.h>

int main(){
    int dia;
    int mes;
    int diff;

    printf("Digite o dia de seu aniversario: ");
    scanf("%d", &dia);

    printf("Digite o mes de seu aniversario: ");
    scanf("%d", &mes);


    if(mes == 4){
        diff = dia - 3;
        if(diff == 0){
            printf("Feliz aniversario!");
        }
        else if(diff > 0){
            printf("Faltam %d dias para seu aniversario!", diff);
        }
        else{
            printf("Passaram %d dias de seu aniversario!", -1 * diff);
        }

    }
    else if(mes == 5){
        printf("Passaram %d dias de seu aniversario!", dia + 27);

    }
    else if(mes == 6){
        printf("Passaram %d dias de seu aniversario!", dia + 58);

    }
    else if(mes == 7){

    }
    else if(mes == 8){

    }
    else if(mes == 9){

    }
    else if(mes == 10){

    }
    else if(mes == 11){

    }
    else if(mes == 12){

    }

    return 0;
    