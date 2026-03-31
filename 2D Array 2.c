#include <stdio.h>
int main(){
int i,j,n,m;
int a[100][100];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);}
}printf("Row wise: ");
for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
      {
      printf("%d ",a[i][j]);
      }
      }

      printf("Column wise: ");
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++)
            printf("%d ", a[i][j]);

}

return 0;


}
