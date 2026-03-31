#include <stdio.h>

int main() {
    int n,i,j; scanf("%d", &n);
    int m=n*2; //double input
    // Loop will run until m-1
    for (i=1;i<=m-1;i++){ //for row
     for (j=1;j <= m-1;j++){// for column
    if (i==1|| i==j ||i+j== m || i==m-1 )
        // i==1 will print 1st line
        // i==j for every time when row=column
        //i+j== m
        {printf ("* ");}

    else printf("  ");
}printf("\n");
}




return 0;
}

