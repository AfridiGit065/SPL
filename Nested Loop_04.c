#include <stdio.h>
int main(){
int i,j,n,k;
printf ("Enter your Number :");
scanf("%d",&n);
for (i=1;i<=n;i++){
for (j=1;j<=n-i;j++){
printf("_");}
for (k=i;k <=2*i-1;k++){
printf("%d",i);
}
printf ("\n");

}
return 0;
}

