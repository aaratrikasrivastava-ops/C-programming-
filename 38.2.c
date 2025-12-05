#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    bool symmetric = true;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}

    