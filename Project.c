#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct addedTask{
    char date[100];
    char project[100];
};
int main(){
char email[100],pass[100];
char mail[100],Lpass[100];
FILE *fptr;
FILE *fptr1;
struct addedTask t,r;
int a,b,c;
while(a!=3){
printf("\nEnter what you want to do: \n");
printf("For sign up , press 1: \n");
printf("For log in  , press 2: \n");
printf("For exit , press 3: \n");

scanf("%d",&a);
if (a==1){

    printf ("Enter your username:\n");
    fflush(stdin);
    gets (email);
    fflush(stdin);
    printf ("Enter your passsword:\n");
    gets (pass);

    fptr=fopen("signup.txt","w");
    if (fptr==NULL){
        printf("File doesn't exist");
    }
    else {
       fprintf(fptr,"%s\n",email);
        fprintf(fptr,"%s\n",pass);
        printf("Signup Succesful");
        }fclose(fptr);
    }

if (a==2){


    printf ("Enter your username:\n");
    fflush(stdin);
    gets (mail);
    fflush(stdin);
    printf ("Enter your passsword:\n");
    gets (Lpass);

    fptr=fopen("signup.txt","r");
    if (fptr==NULL){
        printf("File doesn't exist");
    }
    else {
            fscanf(fptr, " %[^\n]", email);
                fscanf(fptr, " %[^\n]", pass);
       int v = strcmp(email,mail);
       int c = strcmp(pass,Lpass);

        if(v == 0 && c==0){

printf("Login Successful\n");
while(b!=4){
           printf("\nEnter what you want to do: \n");
    printf("For Add task, press 1: \n");
    printf("For View, press 2: \n");
            printf("For Delete , press 3: \n");
            printf("For exit , press 4: \n");

                scanf("%d",&b);
                if(b==1){


                    printf("Enter your date/month/year: \n");
                     fflush(stdin);
                    gets (t.date);
                    fflush(stdin);
                    printf("Enter what you want to add(char) :\n");
                    gets (t.project);
                    if (fptr1==NULL){
        printf("File doesn't exist");
    }
    else {
                    fptr1=fopen("task.txt","w");
                    fprintf(fptr1,"%s\n ",t.date);
                    fprintf(fptr1,"%s\n",t.project);
                    printf("\nTask added succesfully");

                    fclose(fptr1);




                }}
                else if(b==2){

        fptr=fopen("signup.txt","r");
        fptr1=fopen("task.txt","r");
    if (fptr1==NULL){
        printf("File doesn't exist");
    }
    else {
             printf("Enter your date/month/year: \n");
                     fflush(stdin);
                    gets (r.date);
                    fflush(stdin);
                    printf("Enter what you want to add(char) :\n");
                    gets (r.project);
                    fscanf(fptr, " %[^\n]", email);
                fscanf(fptr1, " %[^\n]", t.date);
       fscanf(fptr1, " %[^\n]", t.project);
    int p=strcmp(r.date,t.date);
    int q=strcmp(r.project,t.project);

    if(p==0 && q==0){

       printf("%s\t %s \t%s\n",email,t.date,t.project);



       fclose(fptr1);}
else printf("\nNo Task found!\n");
                }}
                else if(b==3){
                   printf ("Enter your username:\n");
                    fflush(stdin);
    gets (mail);
    printf ("Enter your passsword:\n");
     fflush(stdin);
    gets (Lpass);

    fptr=fopen("signup.txt","r");
    if (fptr==NULL){
        printf("File doesn't exist");
    }
    else {
       fscanf(fptr, " %[^\n]", email);
                fscanf(fptr, " %[^\n]", pass);
       int v=strcmp(email,mail);
       int w=strcmp(pass,Lpass);fclose(fptr);
        if(v == 0 && w == 0){
                fptr=fopen("signup.txt","w");
        fprintf(fptr," ",email);
        fprintf(fptr," ",pass);
        printf("Deleted Successfully\n");
                }
                else printf("Login again\n");}}
                else if(b==4) printf("Exit Succesful\n");
                else printf("Invalid\n");

                }}
else printf("\nMake sure that you signed up then login Again with correct email and password!\n");


    }
}}
return 0;
}

