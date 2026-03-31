#include <stdio.h>
int main (){
int n,i,max,min;
int arr[1000];
scanf("%d", &n);

printf("Enter Your input:");
for (i=0;i<n;i++){
scanf("%d", &arr[i]);}
max = arr[0];
min = arr[0];
int maxIndex=0;
int minIndex=0;
   for (int i =1; i < n ; i++) {
if(max < arr[i]){
         max =arr[i];
         maxIndex = i;}
        if(min > arr[i]){
         min = arr[i];
         minIndex = i;}
   }
   printf("Max:%d, Index:%d",max,maxIndex);
   printf("\nMin:%d, Index:%d",min,minIndex);


    return 0;
}
