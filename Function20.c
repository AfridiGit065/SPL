#include <stdio.h>
#include <math.h>

char symbols[16]; // maximum base 16; digits (0-9) and alpha (A-F)

void convert(int n, int base, char *reversed) {
    if (n <= 0) {
        reversed[0] = '\0';
        return;
    }

    *reversed = symbols[n % base];
    convert(n/base, base, reversed+1);
}

int get_num_and_base(int *n, int *base) {
    scanf("%d%d", n, base);
    if (*base < 2 || *base > 16) {
        printf("Base not within proper range!\n");
        return 0;
    }
    return 1;
}

void show_converted(char *reversed) {
    if (*reversed == '\0') return;
    show_converted(reversed+1);
    putchar(*reversed);
}

int main(void) {
    int n, base;
    if (!get_num_and_base(&n, &base)) return 0;

    if (n <= 0) {
        puts("0");
        return 0;
    }

    // initializing symbols
    for (int i = 0; i < base; i++)
        symbols[i] = (i >= 10) ? 'A' + i-10 : '0' + i;

    char reversed[(int)ceil(log(n+1)/log(base)) + 1];
    convert(n, base, reversed);
    show_converted(reversed);
    putchar('\n');
}
