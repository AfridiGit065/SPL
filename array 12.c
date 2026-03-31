#include <stdio.h>
int main (){
int n,i,j,tem;
int arr[1000];
scanf("%d", &n);

printf("Enter Your input:\n");
for (i=0;i<n;i++){
scanf("\n%d", &arr[i]);}
for (i=0;i<n;i++){
 for (j=i+1;j<n;j++){
if(arr[i]>arr[j]){
tem=arr[i];
arr[i]=arr[j];
arr[j]=tem;}
}}
printf("Array A :");
for (i=0;i<n;i++){
printf(" %d",arr[i]);
}}
