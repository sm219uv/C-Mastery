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

int main() {
    int rows;
    printf("Pocet riadkov: ");
    scanf("%d", &rows);

    /* ------------------------------------------------
     * #1 Dva vnorene for cykly (medzery + hviezdy)
     * ------------------------------------------------ */


    /* ------------------------------------------------
     * #2 Jeden for + printf s vypocitanou sirkou
     * ------------------------------------------------ */


    /* ------------------------------------------------
     * #3 Vzorec v jednom riadku (rows-i medzier, 2*i-1 hviezd)
     * ------------------------------------------------ */


    return 0;
}
