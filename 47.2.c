#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char longest[1000] = "";
    int maxLen = 0;
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    char word[1000];
    int i = 0, j = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("%s", longest);

    return 0;
}