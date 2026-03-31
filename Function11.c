#include <stdio.h>
int Isprime (int);
int main() {
int n,result;
scanf("%d",&n);

if (Isprime(n)== 1 && n!=1){
    printf("Prime");
}
else printf("Not Prime");

}
int Isprime (int n){
int flag=1;
for (int i=2;i<n;i++){
    if (n%i==0){
        flag=0;
        break;
    }
    else flag=1;
}
return flag;
}
