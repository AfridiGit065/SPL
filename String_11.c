#include <stdio.h>
int main (){
char str1[100],str2[100];
int i,j,p=0,len1=0,len2=0;
gets(str1);gets(str2);
for (i=0;str1[i]!='\0';i++){len1++;}
for (i=0;str2[i]!='\0';i++){len2++;}

for(i=0;i<len1;i++){
    if (str1[i]==str2[0]){
        for (j=1;j<len2;j++){
          if  (str1[i+j]!=str2[j]){
           break;
          }}
          if(j == len2){
            p = i;break;
          }}
}
if(p==0){printf("Not a Substring");}
else printf("Substring");
return 0;
}
