#include <stdio.h>

int main() {
    char str[1000];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U'&&str[i]!='Z'&&str[i]!='z'){
            if(str[i]=='z'|| str[i]=='Z'){
            printf("%c",str[i]-'a');
        }

    else if(str[i]==' '){
            printf("%c",' ');
    }
    else if(str[i]=='.'){
            printf("%c",'.');
    }
    else{
        printf("%c",str[i]+1);
    }
        }
    else {
        printf("%c",str[i]);
    }
    }

    return 0;
}
