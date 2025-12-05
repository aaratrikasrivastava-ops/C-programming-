#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter Name, Roll Number, Marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("Name\tRoll\tMarks\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
