#include<stdio.h>
struct Interval {
int hour;
int minute;
int second;
};
int subs(struct Interval t1,struct Interval t2){
   int time1=(t1.hour*3600)+(t1.minute*60)+(t1.second);
    int time2=(t2.hour*3600)+(t2.minute*60)+(t2.second);
int substract=time1-time2;
return substract;
}
int main (){
struct Interval t1,t2;
scanf (" %d %d %d",&t1.hour,&t1.minute,&t1.second);
scanf (" %d %d %d",&t2.hour,&t2.minute,&t2.second);
float p = subs( t1,t2);
int  h = p/3600;
int m = ((p/3600)-h)*60;
int s= ((((p/3600)-h)*60)-m)*60;
printf ("%d %d %d",h,m,s);
return 0;}
