#include<stdio.h>

int main() {

    int *a;
    int i = 0;

    while (i < 5) {
        printf("Enter value: ");
        scanf("%d",a+(i*sizeof(int)));
        i++;
    }

    i = 0;
    while(i < 5) {
        printf("a+%lu: %d\n", i*sizeof(int), *(a+i*sizeof(int)));
        i++;
    }
    
    return 0;
}