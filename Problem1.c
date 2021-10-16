#include<stdio.h>

int main() {

    int sum = 0;
    int limit = 1000;


    for(int i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            
            sum += i;

        }
        
    }

    printf("sum: %d\n", sum);

    return 0;
}