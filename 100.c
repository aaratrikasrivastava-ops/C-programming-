#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter Name, Roll, Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll_no, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
