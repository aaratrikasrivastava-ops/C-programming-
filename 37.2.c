#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j;
    scanf("%d %d", &rows1, &cols1);
    int mat1[rows1][cols1];
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    int mat2[rows2][cols2];
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Addition not possible");
        return 0;
    }
    int sum[rows1][cols1];
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

return 0;
}
