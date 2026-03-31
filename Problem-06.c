#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of the series up to %d is: %d\n", n, sum);

    return 0;
}
