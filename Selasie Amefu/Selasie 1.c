#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num, reversed = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          // get the last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                // remove the last digit
    }

    printf("Reversed number = %d\n", reversed);
	return 0;
}
