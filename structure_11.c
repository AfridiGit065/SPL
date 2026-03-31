#include<stdio.h>
struct parameter {
int meter;
int centi;
};

int main(){
struct parameter x,y;
 scanf("%d %d",&x.meter,&x.centi);
scanf("%d %d",&y.meter,&y.centi);

int m = x.meter + ((x.centi+y.centi)/100)+ y.meter;
int c = (x.centi+y.centi)%100;
printf("The sum is %d meter %d centimeter ",m,c);

return 0;
}
