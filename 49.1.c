#include <stdio.h>
#include <ctype.h>
int main() {
    char name[200];
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i-1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    return 0;
}
