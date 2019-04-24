#include<stdio.h>
#include<stdlib.h>

int main() {

    int *a;
    int i = 0, n = 0;

    printf("How many numbers you want to enter: ");
    scanf("%d",&n);

    a = (int *)realloc(a, sizeof(int)*n);

    // while (i < n) {
    //     printf("Enter value: ");
    //     scanf("%d",a+(i*sizeof(int)));
    //     i++;
    // }

    i = 0;
    while(i < n) {
        printf("a+%lu: %d\n", i*sizeof(int), *(a+i*sizeof(int)));
        i++;
    }
    
    free(a);

    return 0;
}