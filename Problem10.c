#include<stdio.h>
#include<stdbool.h>

bool isPrime(long long n) {

    if (n == 1) {
        return false;
    }

    long long sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0){
            sum ++;
            if (sum > 1)
            {
                return false;
            }
            
        }
        
    }

    return true;

}

int main() {
    //1179908154
    int limit = 2000000;
    int sum = 0;

    for(int i = 1; i <= limit; i++) {
        printf("i: %d\n", i);
        if(isPrime(i) == 1) {
            sum += i;
        }
    }

    printf("Answer: %d\n", sum);
    return 0;
}