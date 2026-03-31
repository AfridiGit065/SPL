#include <stdio.h>
int main(){
int i,flag=0,len1=0,len2=0,lim;
char str1[100],str2[100];
gets(str1);gets(str2);
for (i=0;str1[i]!='\0';i++){len1++;}
for (i=0;str1[i]!='\0';i++){len2++;}
lim=len1>len2? len1 : len2;
for (i=0;i<=lim;i++){
if (str1[i]>str2[i]){flag=1;break;}
else if (str1[i]<str2[i]){flag=2;break;}

}
if (flag==1){printf("%s",str2);}
else if (flag==2){printf("%s",str1);}
else printf("Both Equal");
return 0;


}
