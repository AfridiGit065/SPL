#include<stdio.h>
#include <stdlib.h>
struct Area {
int x;
int y;
};
int main (){
struct Area A,B,C;
 printf("Enter x1,y1 :");
scanf("%d %d",&A.x,&A.y);
 printf("Enter x2,y2 :");
scanf("%d %d",&B.x,&B.y);
 printf("Enter x3,y3 :");
scanf("%d %d",&C.x,&C.y);
float area = abs(B.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y));
if (area!=0){
printf("The area is %0.2f unit",area/2) ;
}
else printf("They are in the same line");
return 0;
}
