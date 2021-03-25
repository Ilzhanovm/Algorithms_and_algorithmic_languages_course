#include <stdio.h>

//On standard input, a natural number N > 0 is given, followed by a sequence of N integers.
//Print to standard output the difference between the largest and smallest elements in the sequence.

int task1_1_1() {
    int N;

    scanf("%d", &N);

    int min, max;
    scanf("%d", &min);
    max = min;

    for (int i = 0; i < N - 1; i++) {
        int nextElement;
        scanf("%d", &nextElement);

        if (nextElement > max)
            max = nextElement;
        if (nextElement < min)
            min = nextElement;
    }

    printf("%d", max - min);

    return 0;
}