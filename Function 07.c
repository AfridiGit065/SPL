#include <stdio.h>

void even(int arr[] ,int size);
int main(){
int arr[100],n;
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
even(arr,n);
return 0;
}
void even(int arr[],int size){
for (int i=0;i<size;i++){
   if(arr[i]%2==0){
    printf("%d",arr[i]);
   }
}

}
