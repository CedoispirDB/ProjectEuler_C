#include<stdio.h>

int main() {
    int n = 1;
    int i = 1;
    int count = 0;
    int limit = 20;

    while (1) {

        if (i == limit) {
            break;
        }
        
        if (n % i == 0) {
            count++;
        } else {
            n++;
            i = 0;
            count = 0;
        }

        i++;    
    }

    printf("Answer: %d\n", n);

    return 0;
}
