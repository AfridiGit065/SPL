#include <stdio.h>
#include <math.h>

void input(int *arr, int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", arr+i);
}

float calc_mean(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (float)sum/size;
}

float calc_sd(int *arr, int size) {
    float mean = calc_mean(arr, size);
    float sum_sq_of_divs = 0;
    for (int i = 0; i < size; i++)
        sum_sq_of_divs += pow(mean - arr[i], 2);
    float variance = sum_sq_of_divs / size;
    return sqrt(variance);
}

int main() {
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", arr+i);
    printf("%.2f\n", calc_sd(arr, n));
}
