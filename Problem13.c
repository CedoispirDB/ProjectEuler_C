#include<stdio.h>
#include<string.h>

char* read(char* fileName){
    static FILE *fp;
    static char buff[255];
	static char des[256], src[256];
    
    fp = fopen(fileName, "r");
    int i = 0;
	while (i < 10){
		fscanf(fp, "%s", buff);
		strcpy(src, buff);
		strcat(des, src);
		i++;
	}

	
	
    fclose(fp);

    return des;
}

int main() {
    char* n = read("./res/data.txt");

	printf("%s\n", n);

	return 0;
}