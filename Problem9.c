#include<stdio.h>

int main() {

    int p = 1;
    int limit = 1000;

    for(int a = 1; a <= limit; a++) {
        for(int b = 1; b <= limit; b++) {
            for(int c = 1; c <= limit; c++) {
                if (a < b && b < c) {
                    if(a * a + b * b == c * c) {

                        if (a + b + c == limit) {
                            p = a * b * c;
                            break;
                        }
                    }
                }
            }
        }
    }

    printf("Answer: %d", p);

    return 0;
}