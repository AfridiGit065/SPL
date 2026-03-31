#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int mat[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        putchar('\n');
    }
}
