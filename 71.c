#include <stdio.h>
int main() {
    char name[100];
    int age;
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    fprintf(fp, "Name: %s, Age: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
