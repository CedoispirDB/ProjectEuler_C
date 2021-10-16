#include<stdio.h>
#include<stdbool.h>

int numberOfDiv(int n) {
    int count = 0;
  
    return count;
}

int main() {

    int i = 1;
    int sum = 0;
    int count = 0;
    bool leave = false;

    while(1) {
                
        sum = sum + i;  
        i++;


        for(int j = 1; j <= sum; j++) {
            if (sum % j == 0) {
                count++;
                if(count == 500) {
                    leave = true;
                    break;
                }
            }
        }

        if (leave) {
            break;
        }
        

        count = 0;

    }
    
    printf("Answer: %d\n", sum);

    return 0;
}