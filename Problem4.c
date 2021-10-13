#include<stdio.h>
#include<stdbool.h>
#include <string.h>

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



    for(int i = 100; i > 0; i--) {
        for(int j = 100; j > 0; j--) {
            i * j

        }
    }

    bool x = isPalindrom("901039");
    printf("%d", x);
    return 0;
}