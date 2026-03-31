#include <stdio.h>
struct complex {
    int real, img;
} ;

int main() {
    struct complex a, b;
    scanf("%d%d", &a.real, &a.img);
    scanf("%d%d", &b.real, &b.img);

    printf("(%d+%di)*(%d+%di)=(%d+%di)",
          a.real,a.img,b.real,b.img,(a.real*b.real)-(a.img*b.img),(a.real*b.img)+(a.img*b.real) );
          return 0;}
