#include<stdio.h>

int main() {
    int sum1 = 0;
    int sum2 = 0;
    int diff = 0;

    for(int i = 1; i <= 100; i++) {
        sum1 += i * i;
        sum2 += i;
    }

    diff = sum2 * sum2 - sum1;

    printf("Answer: %d\n", diff);

    return 0;
}