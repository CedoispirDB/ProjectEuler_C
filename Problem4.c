#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<limits.h>


bool isPalindrom(char* n) {

    int strLen = strlen(n);

    for (size_t i = 0; i < strLen / 2; i++) {

        if (n[i] != n[strLen - i -1 ]){
            return false;
        }   
    }
    
    return true;
}


int main() {

    int m = 0;
    bool result = 1;
    int answer = 0;

    for(int i = 999; i >= 100; i--) {
        for(int j = 999; j >= 100; j--) {
           m = i * j;
           printf("%d * %d = %d\n", i, j, m);
           
            char str[256];
            sprintf(str, "%d", m);

            if (isPalindrom(str) == 1) {
                if (m > answer) {
                    answer = m;
                }
            }

        }
    }

    printf("Answer: %d", answer);

    return 0;
}