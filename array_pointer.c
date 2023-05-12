#include <stdio.h>

void loop(int arr[10]) {
    printf("adress memory of arr inside the func: %d\n\n", &arr);
    
    int arrLen = sizeof arr / sizeof arr[0];
    printf("******* %d\n", arrLen);
    printf("last element is: %d\n", arr[-99]);
    for (int i = 0; i <= arrLen; i++) {
        printf("element n%d\n", i);
        printf("adress memory of arr inside the func loop: %d\n\n", &arr[i]);
    }
}

int main() {
    int arr[10] = {10, 20, 40};
    printf("adress memory of arr: %d\n\n", &arr);
    loop(arr);

    return 0;
}