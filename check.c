#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    int powerOfTwo = 1;

    for (int i = 1; i <= number; i *= 2) {
        if (i == number) {
            printf("Yes\n");
            powerOfTwo = 0;
            break;
        }
    }

    if (powerOfTwo) {
        printf("No\n");
    }

    return 0;
}
