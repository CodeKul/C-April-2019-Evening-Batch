#include<stdio.h>

void change_value(int *x) {
    *x = 20;
    printf("x: %d\n",*x);
}

int main() {
    int a = 10;
    int *p = &a;

    change_value(&a);

    printf("a: %d\n", a);
    printf("&a: %p\n", &a);
    printf("p: %p\n", p);
    printf("&p: %p\n", &p);
    printf("*p: %d\n", *p);

    return 0;
}