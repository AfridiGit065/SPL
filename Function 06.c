#include <stdio.h>

int swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("Value in func: %d %d\n", *a, *b);
}

int main() {
    int a, b; scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Value in main: %d %d\n", a, b);
}
