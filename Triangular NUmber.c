#include <stdio.h>
 void calculateTriangularNumber (int n)
 {
 int  i, triangularNumber = 0;
 for ( i = 1;  i <= n;  ++i )
 triangularNumber += i;
 printf ("Triangular number %d is %d\n", n, triangularNumber);
 }
 int main (void)
 {
 calculateTriangularNumber (3);
 calculateTriangularNumber (20);
 calculateTriangularNumber (50);
 return 0;
 }
