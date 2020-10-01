#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int square_sum = 0;
    int sum_of_squares = 0;
    for (i = 0; i <= 100; i+=1) {
        square_sum+=i;
    }
    for (i = 0; i <= 100; i+=1) {
        sum_of_squares += (i * i);
    }
    square_sum*=square_sum;
    printf("Answer: %d\n", square_sum - sum_of_squares);
    return 0;
}