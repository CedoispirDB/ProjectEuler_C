#include<stdio.h>

int main() {

    int first = 1;
    int second = 2;
    int sum = 0;

    int totalSum = 3;
   

    while(sum < 4000000) {

        printf("sum: %d\n", sum);

        totalSum += sum;

        printf("\ntotal sum: %d\n", totalSum);


        sum = first + second;
        first = second;
        second = sum;        
        


    }

    

   return 0;
 
}

//4613732