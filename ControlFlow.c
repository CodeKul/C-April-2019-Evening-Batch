#include<stdio.h>

int main() {

    int a = 10;
    int b = 10;
    int i = 0;
    int sum = 0;

    // conditional statements
    /*
        if (condition) {
            true statements;
        }
        else if (another condition) {

        }
        else {
            false statements;
        }
    */

    b++;
    if (a < b) {
        printf("a is less than b\n");
        if (a++ == 10) {
            printf("a is equal to 10\n");
        }
    }
    else if (a == b) {
        printf("a and b are equal\n");
    }
    else {
        printf("a is greater than b\n");
    }
    printf("a: %d\nb: %d\n",a,b);


    // Loops
    /*
        initialisation;
        while (condition) {
            statements;
            incr/decr;
        }
    */

    i = 0;
    while (i < 10) {
        printf("i: %d\n", i);
        if (i % 2 == 0) {
            printf("Codekul\n");
        }  
        else {
            printf("The Gurukul for Coders!\n");
        }

        // if (i == 3) {
        //     continue;
        // }
        i++;
    }
    
    /*
        initialisation;
        do {
            statements;
            incr/decr;
        } while(condition);
    */

    i = 0;
    sum = 0;
    do {
        sum += i;
        i++;
    } while (i < 5);
    
    printf("Sum: %d\n",sum);

    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
    */

    for(i = 0; i < 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("Codekul ** %d\n", i);
    }

    // switch case
    /*
        switch (option) {
            case value:
                statements;
                break;
        }
    */

    i = 3;
    switch (i) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
        case 4:
            printf("Four\n");
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}








