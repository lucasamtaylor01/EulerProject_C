#include <stdio.h>

int main(){
    long int prime = 600851475143;
    int divisor = 2;

    while (prime != 1){
        if (prime % divisor == 0){
            prime = prime / divisor;
        }else{
            divisor++;
        }
    }

    printf("%d\n", divisor);

    return 0;
}
