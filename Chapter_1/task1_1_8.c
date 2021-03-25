#include <stdio.h>

/* On standard input, a natural number N > 0 is given, followed by a sequence of N integers.
 *
 * On standard output, print the length of the longest ascending contiguous subsequence of the input sequence. */

int task1_1_8() {
    int N;
    int currentLength, maxLength;
    int prevElement;

    scanf("%d", &N);

    currentLength = maxLength = 1;
    scanf("%d", &prevElement);

    for (int i = 0; i < N - 1; i++) {
        int nextElement;

        scanf("%d", &nextElement);
        if (nextElement > prevElement)
            currentLength++;
        else
            currentLength = 1;

        prevElement = nextElement;

        if (currentLength > maxLength)
            maxLength = currentLength;
    }

    printf("%d", maxLength);

    return 0;
}