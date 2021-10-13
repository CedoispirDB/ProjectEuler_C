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

    int primeCount = 0;
    int  i = 1;
    int limit = 10001;

    while (1) {
        // printf("primeCount: %d, i: %d\n", primeCount, i);

       
            
        if (isPrime(i) == 1) {
            primeCount++;
            if (primeCount == limit) {
                break;
            }
        }
        
        i++;
      
    }
    
    printf("Answer: %d", i);

    return 0;
}