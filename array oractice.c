#include <stdio.h>
int main () {
/*int ara[5] = { 8,6,2,4,7 };
for(int i = 1; i < 5; i += 2){
   ara[i] =  3 * ara[i - 1];
}
for(int i = 1; i < 5; i++){
   if(i % 2 == 0){
      ara[i] = i * 4 + ara[i-1];
   }
}*/
int row, col, sum = 0;
int A[][3]={{1,2,3}, {11,5,6},
           {12,7,9},{8,13,4}};
for(row=0; row<4; row++){
   for(col=0; col<3; col++){
      if(col>row)  {
          sum += A[row][col];
      }
   }
}for(row=0; row<4; row++){
   for(col=0; col<3; col++){
        printf("%d ",A[row][col]);}printf("\n");}
printf("%d",sum);}
