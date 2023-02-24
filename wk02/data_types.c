#include <stdio.h>

int main(void) {

    // integer / integer
    printf("7 / 2 (integer / integer) evaluates to: %d\n", 7/2);

    // ((float / integer) + integer)
    printf("(3.0 / 2) + 1 ((float / integer) + integer) evaluates to: %f\n", (3.0/2)+1);
    
    //  (character + integer)
    printf("'a' + 5 (character + integer) evaluates to: %c\n", 'a' + 5);
    
    // (character - character + character)
    printf("'F' - 'A' + 'a' (character - character + character) evaluates to: %c\n", 'F'-'A'+'a');

    return 0;
}