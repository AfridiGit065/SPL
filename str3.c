#include <stdio.h>
#include <string.h>
int main(){
char str[100],rev[100];
int p=0,i,j,k;
gets(str);
char temp;
int len=strlen(str);
for (i=j=k=0;i<len;i++){
    if(str[i]==' ' || str[i+1]=='\0'){

       for ( k=(str[i]==' '? i-1:i);j<k;j++,k--){
      temp = str[j];
      str[j]=str[k];
      str[k]=temp;
        }
        j=i+1;}
        } str[i]='\0';
        puts(str);
for (int i=0;i<len;i++){
       temp=rev[i] ;
        rev[i] = str[len-1-i];
        str[len-1-i]=temp;
        } rev[i]= '\0';


puts(rev);

}
