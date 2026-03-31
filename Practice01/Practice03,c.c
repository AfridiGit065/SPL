#include<stdio.h>
//sum,multiplication and subsraction of 2 integer number
int main ()
{
int a,b;
printf("Enter the value of a");
scanf ("%d",&a);

printf("Enter the value of b");
scanf ("%d",&b);

int sum=a+b;
printf("\nsum is : %d",sum);

int multiplication=a*b;
printf ("\nmultiplication is : %d",multiplication);

int substraction=a-b;
printf("\nsubstraction is : %d",substraction);

return 0;
}
