#include <stdio.h>
char call(char);
int main(){
char ch;
scanf ("%c",&ch);
call(ch);
}
char call (char ch){
printf("Value recieved from main :%c",ch);

}
