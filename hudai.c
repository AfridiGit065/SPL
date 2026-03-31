#include <stdio.h>

int main() {
    int n,a,dec,b;
    printf("Enter an decimal number: ");
    scanf("%d", &dec);
    printf("Enter an octal number: ");
    scanf("%o", &n);
    printf("Enter a hexadecimal number (in base 16): ");
    scanf("%X", &a);
     printf("Enter a Binary number (in base 2): ");
    scanf("%u", &b);

    int nextbi= b+1;
    int next=dec+1;
    int next1=n+1;
    int next2= a+1;
    printf("The next decimal number after %d is: %d\n",dec,next );
    printf("The next octal number after %o is: %o\n",n,next1);
    printf("The next Hexa number after %X is: %X\n",a,next2);
    printf("The next Binary number after %u is: %u\n",b,nextbi);

    return 0;
}
