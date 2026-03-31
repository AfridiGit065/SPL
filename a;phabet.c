#include <stdio.h>
int main () {

int i,j,n,k;
scanf("%d",&n);
k=(n/2)+1;
for (i=1;i<=n;i++){

for (j=1;j<=n;j++){
if (j==n || j==1 ||  i<=k && j==i || i<=k && j==n-i+1  )
    {
        printf("* ");
    }
    else printf ("  ");  }

printf("\n");
}
return 0;


}
