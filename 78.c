#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    int vowels = 0, consonants = 0;
    char c;

    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            char ch = tolower(c);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);

    return 0;
}
