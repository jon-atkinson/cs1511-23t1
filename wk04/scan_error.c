// program for demonstrating runtime errors of scanning something other than int
// when an integer is expected
// Jonathan Atkinson (z5363013), 03/03/2023
#include <stdio.h>

int main(void) {
    
    // if the below scanf fails, the printf will throw an error because num is
    // uninitialised
    int num;
    printf("Please enter the first number: ");
    scanf("%d", &num);
    printf("num is %d\n", num);

    // this is better, but if the scanf fails, print the wrong number
    int num_2 = 0;
    printf("Please enter the second number: ");
    scanf("%d", &num_2);
    printf("num is %d\n", num_2);

    // if we save the scanf return, we can verify it scanned correctly
    int num_3;
    printf("Please enter the third number: ");
    int result = scanf("%d", &num_3);
    printf("result is %d\n", result);

    // scanf return is very helpful when scanning ? number of things
    int num_4;
    printf("Please enter the fourth number: ");
    while (scanf("%d", &num_4) == 1) {
        printf("Scanned %d\nPlease enter another number: ", num_4);
    }

    // alternate version of the previous block, using ctrl + D (EOF)
    int num_5;
    while (scanf("%d", &num_5) != EOF) {
        printf("Scanned %d\nPlease enter another number: ", num_5);
    }

    return 0;
}