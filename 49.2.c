#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[200];
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';
        int lastStart = 0;
    for (int i = len - 2; i >= 0; i--) {
        if (name[i] == ' ') {
            lastStart = i + 1;
            break;
        }
    }
    if (name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }
    for (int i = 1; i < lastStart - 1; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    printf(" %s", &name[lastStart]);
    return 0;
}
