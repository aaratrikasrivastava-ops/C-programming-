//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10; 
    digits = (int)log10(num); 
    first = num / (int)pow(10, digits); // Get first digit
    if (digits == 0) {
        swappedNum = num;
    } else {
        int middle = num % (int)pow(10, digits);
        middle = middle / 10;
        swappedNum = last * (int)pow(10, digits) + middle * 10 + first;
    }

    printf("After swapping first and last digit: %d\n", swappedNum);
    return 0;
}
