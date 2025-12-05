#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student topper = findTopper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d", topper.name, topper.roll_no, topper.marks);

    return 0;
}
