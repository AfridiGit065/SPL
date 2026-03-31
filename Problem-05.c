#include <stdio.h>

int main()
{
    char a;

    printf("Alphabets from a to z without vowels are: ");
    for (a = 'a'; a <= 'z'; ++a)
    {

        if ( a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u')
        {
            printf("%c ", a);
        }
    }

    printf("\n");

    return 0;
}
