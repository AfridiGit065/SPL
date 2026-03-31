#include <stdio.h>
int str_lenght(char a[]);
int find_substr(char a[],char b[]);
int main(){
    char a[100],b[100];
gets(a);gets(b);
printf("%d",find_substr(a,b));
return 0;
}
int str_lenght(char a[]){
int len=0;
for (int i=0;a[i]!='\0';i++){len++;}
return len;
}
int find_substr(char a[],char b[]){
int i,j,p =0;
for(i=0;i<str_lenght(a);i++){
    if (a[i]==b[0]){
        for (j=1;j<str_lenght(b);j++){
          if  (a[i+j]!=b[j]){
           break;
          }}
        if  (j== str_lenght(b)){
          p=1;break;
          }}
    } return p;
}
