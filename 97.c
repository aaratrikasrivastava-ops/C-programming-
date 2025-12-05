#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    struct Employee e;
    printf("Enter Name, ID, Salary: ");
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    struct Employee empRead;
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee Details:\nName: %s | ID: %d | Salary: %.2f", empRead.name, empRead.id, empRead.salary);

    return 0;
}
