#include <stdio.h>

int minimum(int arr[] ,int size);
int main(){
int arr[100],n;
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int min=minimum (arr,n);
printf("minimum value = %d",min);
return 0;
}
int minimum(int arr[],int size){

    int min=arr[0];
for (int i=0;i<size;i++){
   if(arr[i]<min){
    min =arr[i];
   }
}
return min;
}
