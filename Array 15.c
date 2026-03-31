#include <stdio.h>
int main (){
int n,i,j,m,k;
int a[1000],b[1000],tem=0;
scanf("%d %d", &n,&m);

printf("Enter n:\n");
for (i=0;i<n;i++){
scanf("\n%d", &a[i]);}

printf("Enter m:\n");
for (j=0;j<m;j++){
scanf("\n%d", &b[j]);}
printf("substract set :\n");
for (i=0;i<n;i++){
k=0;
for(j=0;j<n;j++){
if(a[i]==b[j]){k=k+1;break;}}
if(k==0){printf("%d\t",a[i]);}
}



return 0;
}
