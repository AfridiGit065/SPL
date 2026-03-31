
#include <stdio.h>

void printBinary(unsigned int num) {
    if (num > 1)
        printBinary(num / 2);

    printf("%d", num % 2);
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int nextNum = num + 1;

    printf("Next number in binary: ");
    printBinary(nextNum);

    return 0;
}
