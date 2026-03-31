
#include <stdio.h>

int main() {
char str [100];
gets(str);
    int ar[26] = {0};
    for (int i=0; str[i]!= '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            ar[(str[i] - 32) - 'A']++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            ar[str[i] - 'A']++;
    }

    int max = 0;
    for (int i = 1; i < 26; i++){
        if (ar[i] > ar[max]) {max = i;}}

    printf("%c (or %c)\n", 'A' + max, 'a' + max);
}

