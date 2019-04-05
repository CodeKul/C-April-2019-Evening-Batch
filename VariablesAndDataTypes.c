#include<stdio.h>

int main() {

    int a = 10;
    float b = 20.30;
    char c = 70;

// escape characters
/*
    \n new line
    \b backspace
    \a audio
    \r carriage return
    \t tab
*/

// Format specifiers
/*
    %d - int
    %f - float
    %c - char
*/

    printf("%d\t", a);
    printf("%f\t",b);
    printf("%c\n",c);


    return 0;
}