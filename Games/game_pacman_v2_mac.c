#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[20][20];
int score = 0;

void printpath(char ch, int darr, int rarr) {
    system("clear");

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (i == darr && j == rarr) {
                if (arr[i][j] != 1) printf("%c", ch);
                if (arr[i][j] == 0) {
                    arr[i][j] = 2;
                    score += 5;
                }
            } else if (arr[i][j] == 1) {
                printf("|");
            } else if (arr[i][j] == 0) {
                printf(".");
            } else if (arr[i][j] == 2) {
                printf(" ");
            }
            printf("  ");
        }
        printf("\n");
    }
    printf("\n\t\t\tScore = %d", score);
}

void filepath() {
    FILE *fp = fopen("20by20.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        exit(1);
    }
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            fscanf(fp, "%d", &arr[i][j]);
        }
    }
    printpath('R', -1, -1);
    fclose(fp);
}

int main() {
    char c;
    char move = 'R';
    int rarr = 0;
    int darr = 0;
    printf("%c", move);
    filepath();
    int preR, preC;
    while (1) {
        c = getchar();
        preR = darr;
        preC = rarr;
        if (c == '\033') {
            getchar(); // Consume [
            switch (getchar()) {
                case 'A':
                    if (darr > 0) darr--; // Up arrow
                    break;
                case 'B':
                    if (darr < 19) darr++; // Down arrow
                    break;
                case 'C':
                    if (rarr < 19) rarr++; // Right arrow
                    break;
                case 'D':
                    if (rarr > 0) rarr--; // Left arrow
                    break;
            }
            if (arr[darr][rarr] == 1) {
                darr = preR;
                rarr = preC;
            }
            printpath('R', darr, rarr);
        }
        if (c == 'q') {
            break;
        }
    }
    return 0;
}
