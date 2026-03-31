#include <stdio.h>
int calculation(int n){
int sum=0,val,arr[n];
for (int i=0 ;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("Sum in func :%d\n",sum);
return sum;
}

int main(){
int n;
scanf("%d",&n);
int sum = calculation(n);
printf("Sum in main :%d\n",sum);
}

