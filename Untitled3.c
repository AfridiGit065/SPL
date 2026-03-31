#include <stdio.h>

int main() {
    int arr[100], size;
    int *ptr, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Set the address of the first array element to *ptr
    ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i); // *(ptr + i) gives the element at the ith index of the array
    }

    printf("The sum of array elements is: %d\n", sum);
    return 0;
}
