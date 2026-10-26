#include <stdio.h>
#include <stdlib.h>

int Checking(myguess, trueNum) {
    if (myguess > trueNum) {
        printf("\nToo high try less\n");
        getAws(trueNum);
    } else if (myguess < trueNum) {
        printf("\nToo less try higher\n");
        getAws(trueNum);
    } else {
        printf("\nYou got it ! %d\n", trueNum);
    }
}

int getAws(trueNum) {
    int myguess;
    printf("Guess the number (0-99) : \n");
    scanf("%d", &myguess);
    Checking(myguess, trueNum);
}

int main() {
    int trueNum = rand() % 100;
    getAws(trueNum);
    return 0;
}