#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b,);

    switch (a % b)
    {
    case 0:
        printf("%d is divisible by %d\n", a, b);
        break;
    default:
        printf("%d is not divisible by %d\n", a, b);
        break;
    }

    return 0;
}
