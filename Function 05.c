#include <stdio.h>
void swap (int a,int b){
int temp;
temp=a;
a=b;
b=temp;
printf("\nVal in func :%d %d",a,b);
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
swap(a,b);
printf("\nVal in main: %d %d",a,b);

return 0;
}
