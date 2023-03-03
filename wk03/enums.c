#include <stdio.h>

// #define ADULT 0
// #define STUDENT 1
// #define CONCESSION 2

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

int main(void) {
   // explain the different parts of the enum

   // assign a variable to indicate a variable called card_type to indicate a student
    enum opal_card_type freddy = STUDENT;
    // freddy.STUDENT;
   // how could we add this card_type field to the struct from the previous code example 

    return 0;
}