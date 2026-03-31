#include <stdio.h>

int main() {
    int mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
                printf("mat[%d][%d] :",i,j);
            scanf("%d", &mat[i][j]);}

    int determinant =
          mat[0][0] * (mat[1][1]*mat[2][2] - mat[2][1]*mat[1][2])
        - mat[0][1] * (mat[1][0]*mat[2][2] - mat[2][0]*mat[1][2])
        + mat[0][2] * (mat[1][0]*mat[2][1] - mat[2][0]*mat[1][1]);

    printf("%d\n", determinant);
}
