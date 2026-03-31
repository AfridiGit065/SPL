#include<stdio.h>
int main() {
char str_1[100];
int i;
printf("Enter your letter :");
gets(str_1);
for( i=0;str_1[i]!='\0';i++){
if(str_1[i]==' '){
printf("%s\n",str_1);}
else printf("%s",str_1);}
return 0;}
