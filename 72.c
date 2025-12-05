#include <stdio.h>
int main() {
    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    char line[1000];
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
