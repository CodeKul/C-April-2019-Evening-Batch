#include<stdio.h>

int main() {

    int arr[10];
    int i = 0;
    int oSum = 0, eSum = 0;

    printf("Enter 10 elements\n");

    for(i = 0; i < 10; i++) {
        printf("Enter value for arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    
    for( i = 0; i < 10; i++) {

        if (arr[i] % 2 == 0) { 
            eSum += arr[i];
        }
        else {
            oSum += arr[i];
        }
        
    }

    printf("Sum of odd elements: %d\n",oSum);
    printf("Sum of even elements: %d\n",eSum);

    return 0;
}