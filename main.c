#include <stdio.h>
#include <stdlib.h>

int problem_01() {
    int i;
    int sum = 0;
    for (i = 3; i < 1000; i+=1) {
        if ((i % 5 == 0) || (i % 3 == 0)) {
            sum+=i;
        }
    }
    return sum;
}

int problem_06() {
    int i;
    int square_sum = 0;
    int sum_of_squares = 0;
    for (i = 0; i <= 100; i+=1) {
        square_sum+=i;
        sum_of_squares += (i * i);
    }
    square_sum*=square_sum;
    return square_sum - sum_of_squares;
}

int main() {
	printf("Answer to Problem 1: %d\n", problem_01());
	printf("Answer to Problem 2: %d\n", problem_06());
}