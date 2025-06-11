#include <stdio.h>
#include <locale.h>



void cumprimenta(){
    printf("Olá, mundo!");
}


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    
    cumprimenta();
    
    return 0;
}