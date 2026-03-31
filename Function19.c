#include<stdio.h>
int a[10][10];
void InputMatrix(int,int);
void ShowMatrix(int,int);
void ScalarMultiply(int,int );
int main(){
int x,y;
scanf("%d%d",&x,&y);
InputMatrix(x,y);
printf("Orginal:");
ShowMatrix(x,y);
printf("After multiplication :");
ScalarMultiply(x,y);
}
void InputMatrix(int x,int y){
int i,j;
for (i=0;i<x;i++){
    for (j=0;j<y;j++){
            printf("a[%d][%d] :",i,j);
     scanf("%d",&a[i][j]);
    }
}

}
void ShowMatrix(int x,int y){

int i,j;
for (i=0;i<x;i++){
    for (j=0;j<y;j++){
     printf("%d ",a[i][j]);
    }
    printf("\n");}
}
void ScalarMultiply(int x,int y){
    int k;
    printf("Enter your multiplication value :");
    scanf("%d",&k);
for (int i=0;i<x;i++){
    for (int j=0;j<y;j++){
     a[i][j]*=k;
     printf("%d ",a[i][j]);
    }
    printf("\n");}
}
