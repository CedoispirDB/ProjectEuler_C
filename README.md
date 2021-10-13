# ProjectEuler_C
Project Euler But in C

TODO: 
Function to get substring
```
char substring(char string[], int b, int e) {
    char newString[] = "";

    for(int i = b; i < e; i++) {
        printf("c: %c\n", string[i]);
        
        strcat(newString, &string[i]);

        printf("newString: %s\n", newString);
    }
    
    return *newString;
}
```