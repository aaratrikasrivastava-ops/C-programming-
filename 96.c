#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;
    printf("Enter Name, ID, Joining Date (DD MM YYYY): ");
    scanf("%s %d %d %d %d", e.name, &e.id, &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d", 
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}
