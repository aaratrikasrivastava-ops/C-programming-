#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            ; 
        else
            special++;

        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
