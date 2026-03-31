  #include<stdio.h>
int a[3][5];
void InputMatrix(int,int);
void ShowMatrix(int,int);
void ScalarMultiply(int,int );
int main(){
int x,y;
InputMatrix(3,5);
printf("Orginal:");
ShowMatrix(3,5);

ScalarMultiply(3,5);
}
void InputMatrix(int x,int y){
int i,j;
for (i=0;i<3;i++){
    for (j=0;j<5;j++){
     scanf("%d",&a[i][j]);
    }
}

}
void ShowMatrix(int x,int y){

int i,j;
for (i=0;i<3;i++){
    for (j=0;j<5;j++){
     printf("%d ",a[i][j]);
    }
    printf("\n");}
}
void ScalarMultiply(int x,int y){
for (int i=0;i<3;i++){
    for (int j=0;j<5;j++){
     a[i][j]*=2;
     printf("%d ",a[i][j]);
    }
    printf("\n");}
}
