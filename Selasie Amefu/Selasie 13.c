#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, j;
    double sum = 0.0, factorial;

    for (i = 1; i <= 7; i++) {
        factorial = 1.0;

        // Calculate i!
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        sum += (double)i / factorial;
    }

    printf("Sum of the first 7 terms = %.6f\n", sum);

    return 0;
}
