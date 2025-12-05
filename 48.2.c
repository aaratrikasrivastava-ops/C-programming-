#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int start = 0, end = 0, len = strlen(str);
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;              
                  while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}
