#include<stdio.h>
int main() {
char str_1[100],str_2[100];
int i;
printf("Enter your Uppercase letter :");
gets(str_1);
for( i=0;str_1[i]!='\0';i++){
str_2[i]=str_1[i];}
str_2[i]='\0';
puts(str_2);
return 0;}
