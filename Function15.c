#include <stdio.h>
#include <string.h>
int find_substr(char a[],char b[]);
int main(){
    char a[100],b[100];
gets(a);gets(b);
printf("%d",find_substr(a,b));

return 0;
}
int find_substr(char a[],char b[]){
int i,j,len1,len2,p=0;
len1=strlen(a);
len2=strlen(b);
for(i=0;i<len1;i++){
    if (a[i]==b[0]){
        for (j=1;j<len2;j++){
          if  (a[i+j]!=b[j]){
           break;
          }}
        if  (j==len2){
          p=1;break;
          }}
    } return p;
}


