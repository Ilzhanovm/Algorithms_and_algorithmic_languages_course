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
        int temp;
        scanf("%d", &temp);

        if (temp == max)
            count++;

        if (temp > max) {
            max = temp;
            count = 1;
        }
    }

    printf("%d", count);

    return 0;
}