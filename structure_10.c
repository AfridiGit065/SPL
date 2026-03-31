#include <stdio.h>
struct parameter {
float meter;
float centi;
};

int main(){
struct parameter conv;
printf("Enter lenght in meter: ");
scanf("%f",&conv.meter);
printf("Enter lenght in centimeter: ");
scanf("%f",&conv.centi);

float m = conv.meter + (conv.centi/100);
float c = m*100;
printf("Lenght in meter :%0.2f\n",m);
printf("Lenght in centimeter :%0.2f",c);
return 0;
}
