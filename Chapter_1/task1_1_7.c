#include <stdio.h>

/* On standard input, a non-negative integer N and a sequence of valid ASCII characters ending with a dot are specified.
 * Allowed characters are latin letters a..z, A..Z and a space.
 * It is required to encode the Latin letters with the Caesar cipher, and output the spaces unchanged.
 * The number N specifies the shift in the cipher.
 *
 * Let the letters of the alphabet be numbered from 0 to K - 1, where K is the number of characters in the alphabet.
 * Then the symbol with number n is encoded by the symbol with the number p = (n + N) mod K
 *
 * Print an encrypted message ending in a dot. Conversion must be done separately for uppercase and lowercase letters. */

#define NUMBER_OF_LETTERS 26

int task1_1_7() {
    int N;
    int nextChar;

    scanf("%d", &N);

    while ((nextChar = getchar()) != '.') {
        if (nextChar != ' ') {
            if (nextChar >= 'a' && nextChar <= 'z')
                putchar(((nextChar - 'a' + N) % NUMBER_OF_LETTERS) + 'a');

            if (nextChar >= 'A' && nextChar <= 'Z')
                putchar(((nextChar - 'A' + N) % NUMBER_OF_LETTERS) + 'A');
        } else
            putchar(nextChar);
    }
    putchar('.');

    return 0;
}