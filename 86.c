#include <stdio.h>

int main() {
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    enum Menu choice;
    int a, b;

    char op[10];
    scanf("%s %d %d", op, &a, &b);

    if(strcmp(op,"ADD")==0) choice = ADD;
    else if(strcmp(op,"SUBTRACT")==0) choice = SUBTRACT;
    else if(strcmp(op,"MULTIPLY")==0) choice = MULTIPLY;
    else {
        printf("Invalid operation");
        return 1;
    }

    switch(choice) {
        case ADD: printf("%d", a+b); break;
        case SUBTRACT: printf("%d", a-b); break;
        case MULTIPLY: printf("%d", a*b); break;
    }

    return 0;
}
