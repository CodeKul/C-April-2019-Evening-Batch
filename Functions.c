#include<stdio.h>

void simple_function();     //Declaration
int addition(int, int);

int main() {

    int x = 0, y = 0;
    simple_function();       // Function call
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Result: %d\n",addition(x, y));

    return 0;
}

// Defination
void simple_function() {
    printf("This is simple_function\n");
}

int addition(int a, int b) {
    int res = a + b;
    return res;
}