#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, hours, overtime;
    float overtimePay;

    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);

        if (hours > 40) {
            overtime = hours - 40;
            overtimePay = overtime * 120.0;
            printf("Employee %d overtime pay = Rs. %.2f\n", i, overtimePay);
        } else {
            printf("Employee %d did not work overtime.\n", i);
        }
    }

    return 0;
}
