#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int N;
    int notes[] = {100, 50, 10, 5, 2, 1};
    int count[6] = {0};  // to store number of each note
    int i;

    // Input amount
    printf("Enter the amount: ");
    scanf("%d", &N);

    int totalNotes = 0;

    for (i = 0; i < 6; i++) {
        if (N >= notes[i]) {
            count[i] = N / notes[i];   // number of notes of this denomination
            N = N % notes[i];          // remaining amount
            totalNotes += count[i];
        }
    }

    printf("Minimum number of notes = %d\n", totalNotes);

    // Optional: show the breakdown
    printf("Breakdown:\n");
    for (i = 0; i < 6; i++) {
        if (count[i] != 0) {
            printf("Rs. %d : %d\n", notes[i], count[i]);
        }
    }
	return 0;
}
