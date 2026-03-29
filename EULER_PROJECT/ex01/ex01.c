#include <stdio.h>

int main(){
    int contador = 1;
    int soma = 0;
    while (contador < 1000){
        if((contador % 3 ==0) || (contador % 5 == 0)){
            soma = soma + contador;
        }
        contador++;
    }
    printf("%d\n", soma);

}

