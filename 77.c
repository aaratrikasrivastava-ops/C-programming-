#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input file.");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error creating output file.");
        fclose(in);
        return 1;
    }

    char c;
    while ((c = fgetc(in)) != EOF) {
        fputc(toupper(c), out);
    }

    fclose(in);
    fclose(out);
    printf("Text converted to uppercase and written to output.txt");

    return 0;
}
