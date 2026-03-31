#include <stdio.h>
#include <windows.h>
int main () {

int i,j,n,k;
scanf("%d",&n);
k=(n/2)+1;
for (i=1;i<=n;i++){
for (j=1;j<=n;j++){
if (j==n || j==1 || i==k )//H
    {
        printf("* ");
    }
    else printf ("  "); Sleep (300);  }
    printf("\t");
    for (j=1;j<=n;j++){//B
if (i==1 || j==1 || i==k || i==n || j==n)
    {
        printf("* ");
    }
    else printf ("  "); Sleep (100);  }
    printf("\t");
    for (j=1;j<=n;j++){//D
if (i==1 || j==1 ||  i==n || j==n)
    {
        printf("* ");
    }
    else printf ("  "); Sleep (100);  }
    printf("\t");
for (j=1;j<=n;j++){
if (j==n || j==1 ||  j==i )//N
    {
        printf("* ");
    }
    else printf ("  "); Sleep (100);  }
    printf("\t");
    for (j=1;j<=n;j++){
if (i==1 || j==1 || i==k || i==n)//E
    {
        printf("* ");
    }
    else printf ("  "); Sleep (100);  }
    printf("\t");
    for (j=1;j<=n;j++){
    if (j==n || j==1 || i==k )//H
    {
        printf("* ");
    }
    else printf ("  "); Sleep (100);  }
    printf("\t");


for (j=1;j<=2*n-1 ;j++){
if ( j==n-i+1 || i==k && (j>=n-i+1 && j<=n+i-1) || j==n+i-1  )//A
    {
        printf("* ");
    }
    else printf ("  ");  }

    printf("\t");

for (j=1;j<=n;j++){
if (j==1 || i==n  )//L
    {
        printf("* ");
    }
    else printf ("  ");  }


   printf("\n");}



return 0;


}
