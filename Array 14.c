#include <stdio.h>
int main (){
int n,i,j,m;
int a[1000],b[1000],tem=0,p=0,c[1000];
scanf("%d %d", &n,&m);

printf("Enter n:\n");
for (i=0;i<n;i++){
scanf("\n%d", &a[i]);}

printf("Enter m:\n");
for (j=0;j<m;j++){
scanf("\n%d", &b[j]);}
for (i=0;i<n;i++){
tem=0;
for (j=0;j<m && !tem;j++){
if(a[i]==b[j]){tem=1;}
if(tem){c[p++]=a[i];}}}
printf("\nAfter Intersection:");

for (i=0;i<p;i++){printf("\n%d",c[i]);}




}
