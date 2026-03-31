#include <stdio.h>
int main (){
int x,y,z,sum;
printf("Enter the angle value(0<value<180) :");
scanf ("%d%d%d",&x,&y,&z);
sum = x+y+z;
if (sum ==180){
printf ("Yes");
}
else {
printf ("No");
}
}
