#include<stdio.h>

int main() {

    char *str;
    int i = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("str: %s\n",str);

    for(i = 0; str[i] != '\0'; i++) {
        printf("str[%d]: %c\n", i, str[i]);
    }
    
    for (i = 0; *(str+i) != '\0'; i++) {
        printf("str + %d: %c\n", i, *(str+i));
    }

    return 0;
}