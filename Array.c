#include<stdio.h>

int main() {

    int arr[5];
    int i = 0;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    i = 0;
    while (i < 5) {
        printf("arr[%d]: %d\n", i, arr[i]);
        i++;
    }
    return 0;
}