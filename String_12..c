#include <stdio.h>
int main(){
int i,flag=0;
char str[100];
gets(str);
i=0;
while(str[i]!='\0'){
        if(str[i]==' '){
printf("\n");}
else {
  printf("%c",str[i]);}

i++;
}

return 0;
}
