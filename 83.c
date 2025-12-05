#include <stdio.h>

int main() {
    enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    enum Months month;

    int input;
    printf("Enter month number (0-JAN, 1-FEB, ..., 11-DEC): ");
    scanf("%d", &input);

    month = input;

    switch(month) {
        case JAN: printf("31 days"); break;
        case FEB: printf("28 or 29 days"); break;
        case MAR: printf("31 days"); break;
        case APR: printf("30 days"); break;
        case MAY: printf("31 days"); break;
        case JUN: printf("30 days"); break;
        case JUL: printf("31 days"); break;
        case AUG: printf("31 days"); break;
        case SEP: printf("30 days"); break;
        case OCT: printf("31 days"); break;
        case NOV: printf("30 days"); break;
        case DEC: printf("31 days"); break;
        default: printf("Invalid input"); break;
    }

    return 0;
}
