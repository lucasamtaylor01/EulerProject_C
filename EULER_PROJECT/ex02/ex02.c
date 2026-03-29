#include <stdio.h>

int main(){
    int a, b, c;
    int soma = 2;

    a = 1;
    b = 2;
    
    while (1){
        c = a+b;
        a = b; 
        b = c;

        if (c > 4000000){
            printf("%d\n", soma);
            break;
        }

        if (c % 2 == 0){
            soma = soma + c;
        }
    }


    
    return 0;
}
