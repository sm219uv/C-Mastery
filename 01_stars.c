/* 
 * 01_stars.c 
 * CIEL: Vytvorit pyramidu z hviezdiciek. 
 * SKILL: Praca s vnorenymi cyklami (nested loops) a formatovanim vystupu. 
 * PRINCIP: Pouzivatel zadava pocet riadkov, a program vypise pyramidu z hviezdiciek.
 * PRIKLAD:
 * Input: 3
 * Output:
 *   *
 *  ***
 * *****
 */
#include <stdio.h>

int main() {
    int choice;
    int rows;

    do {
        printf("\n--- MAIN MENU ---\n");
        printf("How many rows of stars do you want? \n");
        scanf("%d", &rows);

        printf("Which Option do you want: (1-3) \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have chosen option 1.\n");
                break;
            case 2:
                printf("You have chosen option 2.\n");
                break;
            case 3:
                printf("You have chosen option 3.\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 3);

/*
    int c = (2 * rows - 1); // pocet stlpcov
    // 3 rows -> 5 columns
    // 4 rows -> 7 columns
    // 5 rows -> 9 columns

    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < c; j++) {
            // Vypocet hranice pre hviezdy:
            // lavy okraj: rows-(i-1) = stredna pozicia - posun vlavo
            // pravy okraj: rows+(i-1) = stredna pozicia + posun vpravo
            if (j >= rows-(i-1) && j <= rows+(i-1)) {
                printf("*");  // v rozsahu -> hviezda
            } else {
                printf(" ");  // mimo rozsahu -> medzera
            }
        }
        printf("\n");
    }

*/

    return 0;
}
