#include <stdio.h>
int main (){
int n,i,j,min;
int arr[1000],rev[1000];
scanf("%d", &n);

printf("Enter Your input:\n");
for (i=0;i<n;i++){
scanf("\n%d", &arr[i]);}

printf("Array A :");
for (i=0;i<n;i++){
      for (j=n-i-1;j>=0;j--){
rev[j]=arr[i];
}
printf(" %d",arr[i]);
}
printf("\nArray B :");
for (j=0;j<n;j++){
printf(" %d",rev[j]);
}
return 0;
}
