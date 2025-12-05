#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);     
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;   
        else
            odd++;   
    }
    
    printf("Even=%d, Odd=%d", even, odd);
    
    return 0;
}
