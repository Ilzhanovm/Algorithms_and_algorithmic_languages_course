#include <stdio.h>

//On standard input, a natural number N > 0 is given, followed by a sequence of N integers.
//Print to standard output how many times the maximum occurs in this sequence.

int task1_1_2() {
    int N;

    scanf("%d", &N);

    int max;
    scanf("%d", &max);

    int count = 1;

    for (int i = 0; i < N - 1; ++i) {
        int nextElement;
        scanf("%d", &nextElement);

        if (nextElement == max)
            count++;
        if (nextElement > max) {
            max = nextElement;
            count = 1;
        }
    }

    printf("%d", count);

    return 0;
}