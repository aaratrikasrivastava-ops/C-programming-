#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status s;

    int input;
    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &input);

    s = input;

    switch(s) {
        case SUCCESS: printf("Operation successful"); break;
        case FAILURE: printf("Operation failed"); break;
        case TIMEOUT: printf("Operation timed out"); break;
        default: printf("Invalid input"); break;
    }

    return 0;
}
