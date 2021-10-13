#include<stdio.h>
#include <stdbool.h>
#include <stdint.h>

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

    long long k = 600851475143;
    long long primeFactor = 0;
    

    // for (long long i = k; i > 0; i--){

    //     if (k % i == 0) {
    //         printf("i: %llu\n", i);
    //         if (isPrime(i) == 1){
    //            primeFactor = i;
    //            break;
                                
    //         }
    //     }
        
    // }

    for (long long i = 1; i < k; i++){

        if (k % i == 0) {
            printf("i: %llu\n", i);
            if (isPrime(i) == 1){
               primeFactor = i;
                                
            }
        }
        
    }

    printf("Aswer: %llu", primeFactor);
    

    return 0;
}