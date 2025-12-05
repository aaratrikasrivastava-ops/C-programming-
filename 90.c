#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {
        enum Gender gender;
    };

    struct Person p;
    char input[10];
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else {
        printf("Invalid input");
        return 1;
    }

    if (p.gender == MALE) printf("Male");
    else printf("Female");

    return 0;
}
