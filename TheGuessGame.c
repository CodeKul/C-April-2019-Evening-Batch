#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int inputFromUser();
int generateRandomeNo();
void checkForResult(int, int);

int main() {
    int in_no = 0, rn_no = 0;
    srand(time(0)); 

    while (1) {
        in_no = inputFromUser();
        if (in_no == 0) {
            printf("Bye!\n");
            break;
        }
        else if (in_no > 10) {
            printf("Enter valid number!\n");
            continue;
        }
        rn_no = generateRandomeNo();
        checkForResult(in_no, rn_no);
    }
    return 0;
}
int inputFromUser() {
    int no = 0;
    printf("Enter No. between 1-10: ");
    scanf("%d",&no);
    return no;
}
int generateRandomeNo() {
    int no = 0;
    no = rand() % 10 + 1;
    return no;
}
void checkForResult(int a, int b) {
    if (a == b)
        printf("You Won!\n");
    else
        printf("Better luck next time!\nIt was %d\n",b);
}
