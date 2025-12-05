#include <stdio.h>
int main() {
    int blocks[] = {1, 4, 5, 3, 1};
    int numBlocks = sizeof(blocks)/sizeof(blocks[0]);
    int i, j;
    for(i = 0; i < numBlocks; i++) {
       for(j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
