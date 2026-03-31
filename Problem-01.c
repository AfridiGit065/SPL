#include <stdio.h>

int main(){


int a, b;

printf("Enter two numbers a and b: ");
scanf("%d %d", &a,&b);


switch (a>b ? 1 : (a<b ? 2: 3))
        {

case 1:
printf("%d is greater than %d\n", a, b);
break;

case 2 :
printf("%d is less than %d\n", a, b);
break;

default:
printf("%d is equal to %d\n", a, b);
break;
}
return 0;
}
