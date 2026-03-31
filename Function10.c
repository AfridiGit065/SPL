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
   int tem;
   for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
           if (arr[i]>arr[j]) {
            tem=arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
           }
        }

}
}
