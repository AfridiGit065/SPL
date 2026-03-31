#include <stdio.h>
int main (){
int n,i,j,value,pos=-1;
int arr[1000];
int index [100];
scanf("%d", &n);

printf("Enter Your input:");
for (i=0;i<n;i++){
scanf(" %d", &arr[i]);}
scanf("%d",&value);
for(i=0,j=0;i<n;i++,j++){
if (value ==arr[i]){
pos = i ;
  index[j] = pos; }
}


if(pos ==-1){
printf("Not Found");
}
else {
        printf("Found at index position:");
for (j=0;j<=i-1;j++){
    printf("%d,",index[j]);}}
return 0;
}
