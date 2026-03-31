#include <stdio.h>
int calculation(int arr[],int n){
int sum=0,val;
for (int i=0;i<n;i++){
sum+=arr[i];
}
printf("Sum in func :%d\n",sum);
return sum;
}

int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int sum = calculation(arr,n);
printf("Sum in main :%d\n",sum);
}
