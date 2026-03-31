#include <stdio.h>
int main(){
char str1[100],str2[100];
int len=0,len2=0,flag=0,i;
gets(str1);gets(str2);
for (i=0;str1[i]!='\0';i++){len++;}
for (i=0;str2[i] != '\0';i++){len2++;}

for (i=len;i<=len+len2;i++){
str1[i]=str2[flag];
flag++;
}
puts (str1);
return 0;
}
