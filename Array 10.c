#include <stdio.h>
int main (){
int n,i,j,m;
int a[1000],b[1000],tem;
scanf("%d %d", &n,&m);

printf("Enter n:\n");
for (i=0;i<n;i++){
scanf("\n%d", &a[i]);}

printf("Enter m:\n");
for (j=0;j<m;j++){
scanf("\n%d", &b[j]);}
int max= n>m ? n:m;
for (i=0;i<max;i++){
      for (j=i;j<=i;j++){
tem=a[i];
a[i]=b[j];
b[j]=tem;
}}
printf("Array A :");
for (i=0;i<m;i++){
printf(" %d",a[i]);
}
printf("\nArray B :");
for (j=0;j<n;j++){
printf(" %d",b[j]);
}
return 0;
}
