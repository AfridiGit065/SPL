 #include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num;


    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    if (num.imag >= 0) {
        printf("%.2lf + %.2lfi\n", num.real, num.imag);
    } else {
        printf("%.2lf - %.2lfi\n", num.real, -num.imag);
    }

    return 0;
}

