
#include <stdio.h>
int Isprime (int);
void GeneratePrime(int n,int arr[]);
int main() {
int n,result,arr[100];
scanf("%d",&n);

GeneratePrime(n,arr);

}
void GeneratePrime(int n,int arr[]){
    printf("Prime less than %d : ",n);
for (int j=1;j<n;j++){
    if (Isprime( j)== 1 && j!=1){
    arr[j]=j;
    printf("%d ",arr[j]);}
}


}

int Isprime (int j){
int flag=1;
for (int i=2;i<j;i++){
    if (j%i==0){
        flag=0;
        break;
    }
    else flag=1;
}
return flag;
}
