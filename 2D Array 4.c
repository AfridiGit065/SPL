#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Major diagonal: ");
    for (int i = 0; i < n; i++)
        printf("%d ", mat[i][i]);
    putchar('\n');

    printf("Minor diagonal: ");
    for (int i = 0; i < n; i++)
        printf("%d ", mat[i][n-1-i]);
    putchar('\n');
}
