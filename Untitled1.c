#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int k=n/2;//middle point
for(int i=1;i<=n;i++){//Outer loop
for(int j=1;j<=n;j++){//inner loop
    if((i==j&& i>1&&i<=k+1) ||(i+j==n+1&& i>1&&i<=k+1)|| (j==k+1 && i<n && i>k+1)){
        printf("*");}
        else printf(" ");

}
printf("\n");
}

}
