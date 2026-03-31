#include <stdio.h>
#include <math.h>

 struct complex {
    float real, img;
} ;

int main() {
    struct complex c;
    scanf("%f%f", &c.real, &c.img);

    float mod = sqrt( c.real*c.real + c.img*c.img );
    printf("Modulus = %.4f\n", mod);
    if (c.img*c.real < 0)
        printf("Argument = %.4f\n", 3.1416+atan(c.img/c.real));
    else
        printf("Argument = %.4f\n", atan(c.img/c.real));
}
