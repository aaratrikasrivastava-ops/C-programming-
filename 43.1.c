#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int i, length;
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
