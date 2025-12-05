#include <stdio.h>
int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!");
        return 1;
    }
    printf("File opened successfully.\n");
    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    return 0;
}
