#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if(str[n-1] == '\n')
        str[n-1] = '\0';
        int capitalize = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isspace(str[i]))
            capitalize = 1;
        else if(capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
            capitalize = 0;
        }
    }
    printf("%s", str);
    return 0;
}
