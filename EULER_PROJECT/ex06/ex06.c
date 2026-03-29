# include <stdio.h>

int main(){
    int i, counter, limit;
    int diff;

    i = 0;
    limit = 100;

    int sum, square_of_sum, sum_of_square;
    
    square_of_sum = 0;
    sum = 0;
    
    while (i <= limit){
        sum = sum + i;
        sum_of_square = sum_of_square + i*i;
        i++;
    }

    square_of_sum = sum*sum;

    diff = square_of_sum - sum_of_square;

    printf("%d\n", diff);
    return 0;
}
