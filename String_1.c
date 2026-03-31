#include<stdio.h>
int main() {
char str [100];
printf("Enter your Uppercase letter :");
gets(str);
for(int i=0;str[i]!='\0';i++){
if (str[i]>='0' && str[i]<='Z'){
    str[i]=str[i]+32;}
else if (str[i]>='a' && str[i]<='z'){
   str[i]=str[i]-32;

}
else printf ("Wrong Input ");

}puts(str);
return 0;
}
