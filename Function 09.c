#include <stdio.h>
void Multi(int n,int arr[]);
int main() {
int arr[100],n;
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
 Multi(n,arr);
for (int i=0;i<n;i++){
  printf("%d ",arr[i]);
}
return 0;
}
void Multi(int n,int arr[]){

   for (int i=0;i<n;i++){
    arr[i]*=2;
}
}
