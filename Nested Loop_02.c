#include <stdio.h>
int main(){
int i,j,n;
printf ("Enter your Number :");
scanf("%d",&n);
for (i=1;i<=n;i++){
for (j=i;j<=i+2;j++){
printf("%d ",j);
}
printf ("\n");

}
return 0;
}
