#include <stdio.h>
int main (){
int n,i;
int arr[1000];
scanf("%d", &n);

printf("Enter Your input:\n");
for (i=0;i<n;i++){
scanf("\n%d", &arr[i]);}
for (i=0;i<n;i++){
if(arr[i]%3==0){arr[i]=-1;}

printf(" %d",arr[i]);
}
return 0;}
