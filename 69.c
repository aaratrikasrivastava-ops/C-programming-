#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
        int xorAll = 0;
    for(int i = 0; i < n; i++)
        xorAll ^= nums[i];
        for(int i = 0; i < n - 1; i++)
        xorAll ^= i;
        printf("%d", xorAll);
        return 0;
}
