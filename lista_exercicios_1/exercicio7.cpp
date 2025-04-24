#include <stdio.h>
//#include <stdlib.h>
#include <locale.h>

int main(){


    /*
     #teste1
    int v2;
    int v3;

    printf("Digite 3 valores");
    scanf("%d", v1);
    scanf("%d", v2);
    scanf("%d", v3);
    printf((v1+v2+v3)/3= %d , media aritmetica);
 */   
    setlocale(LC_ALL, "Portuguese_Brazil");

    int v1;
    int v2;
    int v3;
    
    printf("Digite tres valores, separe-os dando um espaco\n");
    scanf("%d%d%d" , &v1, &v2, &v3);
    //printf("Valores: %d, %d, %d\n",  v1, v2, v3);
    printf("media aritmetica = %d\n",  (v1 + v2 + v3) / 3);

    //tentei configurar para deixar os caracteres especias, adicionando a biblioteca e tudo mais, mas não consegui então eu retirei eles
    
    return 0;
}