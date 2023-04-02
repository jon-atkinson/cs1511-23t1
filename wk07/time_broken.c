#include <stdio.h>

void increment_time(int *days, int *hours, int *minutes);
void print_data(int *days_ptr, int days);

int main(void) {
    int days = 3;
    int hours = 4;
    int minutes = 59;
    int *days_ptr = &days;


    increment_time(&days, &hours, &minutes);

    printf("Current time: %d days, %d hours and %d minutes\n", days, hours, minutes);
    
    printf("Some extra information you may find interesting or helpful:\n");
    print_data(days_ptr, days);

    return 0;
}

// increments the time by 1 minute
void increment_time(int *days, int *hours, int *minutes) {
    *minutes = *minutes + 1;
    if ((*minutes) == 60) {
        (*minutes) = 0;
        (*hours)++;
    }

    if ((*hours) == 24) {
        (*hours) = 0;
        (*days)++;
    }
}

/**
 * prints some information to the command line, you may find inspecting the
 * printf arguments helpful to understanding pointers
*/ 
void print_data(int *days_ptr, int days) {    
    // %p is the c format specifier for a memory address, don't need to know but
    // I have included it here so that you can see the difference between data and
    // addresses  

    // the %p format specifier prints a memory address - this may be different
    // every time you run the program because the program manages memory
    printf("%p\n", days_ptr);

    // star here dereferences the pointer to show what it points to
    printf("%d\n", *days_ptr);
    printf("%d\n", days);
}