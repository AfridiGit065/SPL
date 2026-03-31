
#include <stdio.h>
int main (){
int n,i,max,min;
char arr[1000];
scanf("%d", &n);

printf("Enter Your input:");
for (i=0;i<n;i++){
scanf(" %c", &arr[i]);}
int count=0;
for(i=0;i<n;i++){
if (arr[i]== 'A'||arr[i]== 'E'||arr[i]== 'I'||arr[i]== 'O'||arr[i]== 'U'){count++;}
}
printf("COUNT: %d",count);
return 0;
}
