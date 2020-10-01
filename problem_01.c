#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int sum = 0;
    for (i = 3; i < 1000; i+=1) {
        if ((i % 5 == 0) || (i % 3 == 0)) {
            sum+=i;
        }
    }
    printf("Answer: %d\n", sum);
    return 0;
}