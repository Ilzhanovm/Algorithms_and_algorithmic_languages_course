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
        int temp;
        scanf("%d", &temp);

        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }

    printf("%d", max - min);

    return 0;
}