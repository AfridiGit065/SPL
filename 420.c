#include<stdio.h>

int n=100;
struct customer{
char name[100];
int id;
int count_shop;
int spend[100];
};
void Input (struct customer a[100]){
    for (int i=0;i<n;i++){
printf("Enter your name :");
fflush(stdin);
gets (a[i].name);
printf("Enter your Id :");
fflush(stdin);
scanf("%d",&a[i].id);
printf("Enter how many times shopped  :");
fflush(stdin);
scanf("%d",&a[i].count_shop);
fflush(stdin);
for (int j=0;j<a[i].count_shop;j++){
    scanf("%d",&a[j].spend)
}

    }
}
 int main() {
   struct customer a[100];


   return 0;
 }
