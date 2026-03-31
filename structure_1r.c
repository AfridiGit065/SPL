#include <stdio.h>
struct Info{
char x[100];
int y;
float z;
};
int main(){
struct Info std;
gets(std.x);
scanf("%d",&std.y );
scanf("%f",&std.z);
printf("Name :%s\n",std.x);

printf("ID :%d\n",std.y);
printf("CGPA :%0.2f\n",std.z);
}
