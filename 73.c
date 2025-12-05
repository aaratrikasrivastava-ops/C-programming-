#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    int characters = 0, words = 0, lines = 0;
    char c;
    int inWord = 0;
    while((c = fgetc(fp)) != EOF) {
        characters++;
        if(c == '\n')
            lines++;
            if(isspace(c))
            inWord = 0;
        else if(!inWord) {
            words++;
            inWord = 1;
        }
    }
    if(characters > 0 && c != '\n')
        lines++;

    fclose(fp);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
