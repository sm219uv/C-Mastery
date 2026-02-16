/*
 * 01_stars.c
 *
 * Zameranie: for cyklus, vnoreny for cyklus, scanf, printf, formatovanie vystupu
 *
 * ZADANIE: Vypisac pyramidu z hviezdiciek podla poctu riadkov od uzivatela.
 *   Input: 3
 *   Output:
 *     *
 *    ***
 *   *****
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int rows;
    printf("Pocet riadkov: ");
    scanf("%d", &rows);

    int choice = (rand() % 3) + 1;
    printf("Pouzity algoritmus: #%d\n\n", choice);

    switch (choice) {

    /* ------------------------------------------------
     * #1 Dva vnorene for cykly (medzery + hviezdy)
     * ------------------------------------------------ */
    case 1:
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows - i - 1; j++)
                printf(" ");
            for (int j = 0; j < 2 * i + 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    /* ------------------------------------------------
     * #2 Jeden for + printf s vypocitanou sirkou
     * ------------------------------------------------ */
    case 2: {
        char stars[2 * rows];
        memset(stars, '*', 2 * rows - 1);
        stars[2 * rows - 1] = '\0';

        for (int i = 0; i < rows; i++)
            printf("%*s%.*s\n", rows - i - 1, "", 2 * i + 1, stars);
        break;
    }

    /* ------------------------------------------------
     * #3 Vzorec v jednom riadku (rows-i medzier, 2*i+1 hviezd)
     * ------------------------------------------------ */
    case 3: {
        char line[2 * rows];
        for (int i = 0; i < rows; i++) {
            memset(line, ' ', rows - i - 1);
            memset(line + rows - i - 1, '*', 2 * i + 1);
            line[rows + i] = '\0';
            puts(line);
        }
        break;
    }
    }

    return 0;
}
