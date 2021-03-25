#include <stdio.h>

/* On standard input, a natural number N >= 3 is given, followed by a sequence of N integers.
 *
 * Print to standard output the 3 largest numbers in this sequence in descending order. */

int task1_1_9() {
    int N;
    int max1, max2, max3;

    scanf("%d", &N);

    scanf("%d %d %d", &max1, &max2, &max3);

    if (max2 < max3) {
        int temp;
        temp = max2;
        max2 = max3;
        max3 = temp;
    }
    if (max1 <= max2) {
        int temp;
        temp = max1;
        max1 = max2;
        max2 = temp;
    }
    if (max2 < max3) {
        int temp;
        temp = max2;
        max2 = max3;
        max3 = temp;
    }

    for (int i = 0; i < N - 3; i++) {
        int nextElement;

        scanf("%d", &nextElement);

        if (nextElement > max3) {
            max3 = nextElement;

            if (max3 > max2) {
                int temp;
                temp = max2;
                max2 = max3;
                max3 = temp;

                if (max2 > max1) {
                    int temp;
                    temp = max1;
                    max1 = max2;
                    max2 = temp;
                }
            }
        }
    }

    printf("%d %d %d", max1, max2, max3);

    return 0;
}