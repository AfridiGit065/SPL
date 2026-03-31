#include <stdio.h>
int main (){

FILE *fptr=fopen("input.txt","r");
int sum=0;
for (int i=0;fscanf(fptr,"%d",&i)!= EOF;){
if(i%5==0){
sum+=i;
}
}fclose(fptr);
fptr = fopen("output.txt","w");
fprintf(fptr,"%d",sum);
fclose(fptr);
}
