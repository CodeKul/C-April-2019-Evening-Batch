#include<stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int res = 0;

    // Assignment
    /*
        =
    */

    a = 10;
    b = 20;

    printf("a: %d\nb: %d\n",a, b);

    // Arithmetic
    /*
        +
        -
        *
        /
        %
    */

    res = b % a;

    // Compound Assignment
    /*
        +=
        -=
        *=
        /=
        %=
    */

    res += a; // res = res + a;

    // Comparision
    /*
        <
        >
        <=
        >=
        ==
        !=
    */

    res = a > b;

    // Logical
    /*
        &&
        ||
        !

        p   q   &&  ||  !p
        1   1   1   1   0
        1   0   0   1   0
        0   1   0   1   1
        0   0   0   0   1
    */

    res = !((a != b) && (a == 10));

    // Special
    /*
        result = condition ? true part : false part;
    */

    res = !((a != b) && (a == 10)) ? 10 : 20;
    printf("res: %d\n",res);

    // Incr-Decr
    /*
        var++   post incr   var = var + 1
        ++var   pre incr
        var--   post decr
        --var   pre decr
    */

    printf("a: %d\n",a++);
    printf("b: %d\n",++b);

    printf("a: %d\n",a--);
    printf("a: %d\n",a);
    printf("b: %d\n",++b);




    return 0;
}

