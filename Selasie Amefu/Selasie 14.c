#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, j, k;

    printf("All combinations of 1, 2 and 3 are:\n");

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            for (k = 1; k <= 3; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    return 0;
}
