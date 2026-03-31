#include <stdio.h>

int main()
{
    int a, b,c;

    printf("Enter three numbers (a ,b and c): ");
    scanf("%d %d %d", &a, &b,&c);

    switch (a > b ? (a>c ? 1:3)  : (b>c ? 2 : 3) )
    {

    case 1:
        printf("Maximum  %d\n", a);
        break;
    case 2 :
        printf("Maximum  %d\n", b);
        break;

        case 3:
       printf("Maximum  %d\n", c);
        break;

    }
switch (a < b ? (a<c ? 1:3)  : (b<c ? 2 : 3) )
    {

    case 1:
        printf("Minimum  %d\n", a);
        break;
    case 2 :
        printf("Minimum  %d\n", b);
        break;

        case 3:
       printf("Minimum  %d\n", c);
        break;


    }

    }
