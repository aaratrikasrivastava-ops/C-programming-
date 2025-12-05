#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    printf("%d", sum);
    return 0;
}
