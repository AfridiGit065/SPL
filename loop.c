#include <stdio.h>
int main(){
char n;
int s,i;
printf("shift value:");
scanf("%d",&s);
while (n!= 'A' || n!='B' || n!='C'){
scanf(" %c",&n);
printf("%c",n-s);
if(n ==' '){ printf(" ");}
}

}
