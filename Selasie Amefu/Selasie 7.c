#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("It is a capital letter.\n");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("It is a small letter.\n");
    }
    else if (ch >= 48 && ch <= 57) {
        printf("It is a digit.\n");
    }
    else {
        printf("It is a special symbol.\n");
    }

    return 0;
}
