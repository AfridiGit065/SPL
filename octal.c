#include<stdio.h>
  int main()
{
       int n,base;
       printf ("Enter your Number and Base :");
       scanf("%d %d",&n,&base);
       if (base ==10){
	printf("Octal value is: %o",n);
	printf("\nHexa value is: %X",n);
	 printf("\nBinary value :");
	 int rem = 0, p = 1,bin=0;
	while(n){

        rem = n % 2;
        n = n / 2;
        bin = bin + (rem * p);
         p = p * 10;
         }
         printf("%d",bin);
      }
      if (base==2){
       int decimal=0,place=1,reminder=0;
       while(n){
        reminder= n%10;
        decimal=decimal + (reminder*place);
        n=n/10;
        place = place*2;
        }
      printf(" Decimal value is :%d",decimal);

     printf("O\nctal value is: %o",decimal);
	printf("\nHexa value is: %X",decimal);

      }
      if(base==8){
       int decimal=0,place=1,reminder=0;
        while(n){

             reminder= n%10;
        decimal=decimal + (reminder*place);
        n = n / 10;
        place = place*8;
        }
     printf(" Decimal value is :%d",decimal);
     printf("\nHexa value is: %X",decimal);
     printf("\nBinary value :");
	 int rem = 0, p = 1,bin=0;
	while(decimal){

        rem = decimal % 2;
       decimal =decimal / 2;
        bin = bin + (rem * p);
         p = p * 10;
         }
         printf("%d",bin);
}


}
	return 0;
}
