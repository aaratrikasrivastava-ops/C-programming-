#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int nums1[m], nums2[n];
    for(int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);
        int i = 0, j = 0;
    while(i < m && j < n) {
        if(nums1[i] < nums2[j])
            printf("%d ", nums1[i++]);
        else
            printf("%d ", nums2[j++]);
    }
    while(i < m)
        printf("%d ", nums1[i++]);
    while(j < n)
        printf("%d ", nums2[j++]);

    return 0;
}
