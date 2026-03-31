#include <stdio.h>
int main(){
char str[100],ch;
int count =0,maxcount=0;
gets (str);
int len=strlen(str);

for (int i=0;i<len;i++){
        count =0;
        for (int j=0;str[j]!='\0';j++){
             if (str[i]==str[j]){
                 count++;
                 }
                 }
                 if (maxcount<count){
                    maxcount=count;
                    ch=str[i];
                 }

}
printf("%c occurs =%d times ",ch,maxcount);
return 0;


}
