#include <stdio.h>

int main() {
    int n,i,j,k; scanf("%d", &n);
    int m=n*2;
    for (i=1;i<=n;i++){
     for (j=1;j<=2*i-1;j++)printf (" ");
    for (k=1;k<=m-(2*i-1);k++)printf ("* ");
    printf("\n");
    }

    for (i=1;i<=n-1;i++){
         for (k=1;k<=m-(2*i+1);k++)printf (" ");
       for (j=1;j<=2*i+1;j++)printf ("* ");
    printf("\n");
    }

return 0;
}
