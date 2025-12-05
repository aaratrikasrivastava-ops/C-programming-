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
    bool distinct = true;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
