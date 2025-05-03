#include <stdio.h>

int main(){
    int n;
    int fat = 1;
    int i;

    //n = 5;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--){
        fat = fat * i;
        printf("%d %d\n",i, fat);
    }

    //fat = 5 * 4 * 3 * 2 * 1
}