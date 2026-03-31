#include <stdio.h>

int Isprime (int n){
int flag=1;
for (int i=2;i<n;i++){
    if (n%i==0){
        flag=0;
        break;
    }
    else {flag=1;break;}

}
return flag;
}


int nth_prime(int n) {
    int prime;
    for (int i = 2, count = 0; count < n; i++)
        if (Isprime(i)) {
            prime = i;
            count++;

        }
    return prime;
}

int main() {
    int n; scanf("%d", &n);
    printf("%dth prime: %d\n", n, nth_prime(n));
}
