#include<stdio.h>
#include<stdbool.h>

bool isPrime(long long n) {
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

    int primeCount = 0;
    int  i = 0;
    int limit = 6;

    while (1) {

        if (primeCount == limit) {
            break;
        }
            
        if (isPrime(i) == 1) {
            primeCount++;
        }

        i++;
    }
    
    printf("Answer: %d", i);

    return 0;
}