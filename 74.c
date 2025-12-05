#include <stdio.h>
int main() {
    char source[100], dest[100];
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);
    FILE *src = fopen(source, "r");
    if(src == NULL) {
        printf("Error opening source file.");
        return 1;
    }
    FILE *dst = fopen(dest, "w");
    if(dst == NULL) {
        printf("Error creating destination file.");
        fclose(src);
        return 1;
    }
    char c;
    while((c = fgetc(src)) != EOF) {
        fputc(c, dst);
    }
    fclose(src);
    fclose(dst);
    printf("File copied successfully to %s", dest);
    return 0;
}
