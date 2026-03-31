#include <stdio.h>
int main (){
int n,i,j;
scanf("%d", &n);
int arr[n];

for (i=0;i<n;i++){
scanf("%d", &arr[i]);
}
for (i=n-1;i>=0;i--){
printf("\n%d ",arr[i]);
}



}
