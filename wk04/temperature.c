// program that scans in some temperature readings, and prints the highest one
// to terminal (2dp)
// COMP1511 23T1 F09D

#include <stdio.h>

#define NUM_DAYS 7

int main(void) {
    // Declare and initialise array
    double temp[NUM_DAYS] = {0};

    // Read in values
    int i = 0;
    while (i < NUM_DAYS) {
        printf("enter temperature: ");
        scanf("%lf", &temp[i]);
        i++;
    }

    // Find max values
    double max = temp[0];
    int j = 0;
    while (j < NUM_DAYS) {
        if (temp[j] > max) {
            max = temp[j];
        }
        j++;
    }

    // Print max temp
    printf("Max temperature is %.2lf\n", max);

    return 0;
}