#include<stdio.h>
#include <math.h>
struct distance {
int x;
int y;
};

float Distance ( struct distance A,struct distance B){
    float dis=0;
    dis = sqrt (pow((A.x-B.x),2) + pow ((A.y-B.y),2));

return dis;
}
int main (){
struct distance A,B;
printf("Enter x1,y1 :");
scanf ("%d %d",&A.x,&A.y);
printf("Enter x2,y2 :");
scanf ("%d %d",&B.x,&B.y);

printf("The distace is %0.2f unit",Distance(A,B));
return 0;
}
