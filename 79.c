#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    int num, count = 0, sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.");
        return 0;
    }

    double average = (double)sum / count;
    printf("Sum = %d\nAverage = %.2f", sum, average);

    return 0;
}
