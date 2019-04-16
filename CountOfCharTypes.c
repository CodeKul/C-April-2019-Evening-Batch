#include<stdio.h>

int main() {

    char chars[11];
    int i = 0;
    int smallLetters = 0, capitalLetters = 0, digits = 0, others = 0;

    printf("Enter 10 characters: ");
    scanf("%s", chars);

    for( i = 0; i < 10; i++) {
        if (chars[i] >= 'A' && chars[i] <= 'Z') {
            capitalLetters++;
        }
        else if (chars[i] >= 97 && chars[i] <= 122) {
             smallLetters++;
        }
        else if (chars[i] >= 48 && chars[i] <= 57) {
            digits++;
        }
        else {
            others++;
        }
    }
    
    printf("Capital Letters: %d\n", capitalLetters);
    printf("Small Letters: %d\n", smallLetters);
    printf("Digits: %d\n", digits);
    printf("Others: %d\n", others);

    return 0;
}

