#include <stdio.h>
struct Info{
char x[100];
int y;
float z;
};
void Input (struct Info *std,int n){

    for (int i=0;i<n;i++){
            printf("Enter student name ");
            fflush(stdin);
gets(std[i].x);
fflush(stdin);
printf("Enter student Id ");
scanf("%d",&std[i].y );
fflush(stdin);
printf("Enter student Cgpa");
scanf("%f",&std[i].z);
fflush(stdin);}
}
void Output(struct Info *std,int n){

for (int i=0;i<n;i++){
        printf("\tStudent Info : %d     \t",i+1);
printf("\nName :%s\n",std[i].x);
printf("\nID :%d\n",std[i].y);
printf("\nCGPA :%0.2f\n",std[i].z);
}

}
int main(){
    int n;
    printf("Enter number of students");
    scanf("%d",&n);
struct Info *std[100];
Input(std,n);
Output (std,n);
}
