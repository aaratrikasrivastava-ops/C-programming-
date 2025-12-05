#include <stdio.h>
int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int d = 0; d < n + m - 1; d++) {
        int r = (d < n) ? d : n - 1;
        int c = (d < n) ? 0 : d - (n - 1);
        while (r >= 0 && c < m) {
            printf("%d ", mat[r][c]);
            r--;
            c++;
        }
    }
return 0;
}
