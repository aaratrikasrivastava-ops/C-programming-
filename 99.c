#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter Name, Roll, Marks: ");
    scanf("%s %d %d", s->name, &s->roll_no, &s->marks);

    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
