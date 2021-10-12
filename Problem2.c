#include<stdio.h>

int main() {

    int first = 1;
    int second = 2;
    int sum = 0;

    int totalSum = 2;
   

    while(sum < 4000000) {

        if (sum % 2 == 0) {
            totalSum += sum;
        }

        sum = first + second;
        first = second;
        second = sum;        
   
    }

    printf("total sum: %d", totalSum);

   return 0;
 
}

