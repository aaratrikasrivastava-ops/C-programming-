#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
