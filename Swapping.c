#include<stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 10;
    int b = 20;

    printf("Before swap\na: %d\nb: %d\n",a ,b);
    swap(&a, &b);
    printf("After swap\na: %d\nb: %d\n",a ,b);

    return 0;
}