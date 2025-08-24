#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int base, exponent;
    long long result = 1; // result can be very large
    int i;

    // Input from user
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power manually
    if (exponent < 0) {
        printf("This program does not handle negative exponents.\n");
    } else {
        for (i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d^%d = %lld\n", base, exponent, result);
    }

    return 0;
}
