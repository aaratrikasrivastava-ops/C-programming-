#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int i, length, flag = 1;
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
