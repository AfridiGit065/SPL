#include<stdio.h>
int gcd(int,int);
int lcm(int,int);
int main (){
int a,b;
while(1){
    scanf("\n%d%d",&a,&b);
 printf("GCD :%d",gcd(a,b));
printf("\nLCM :%d",lcm(a,b));
}
return 0;
}
int gcd(int a,int b){
int tem,min,max,i;
max=a<b? b:a;
min=a>b? b:a;
for(i=1;max%min!=0;i++){
    tem=min;
    min=max%min;
    max=tem;
}
return min;
}
int lcm(int a,int b){
int l;
l=(a*b)/gcd(a,b);
return l;
}
