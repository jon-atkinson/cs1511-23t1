#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {
    // initialise a struct person jessica
    int number;
    struct person jessica;
    jessica.shoe_size = 9;
    jessica.height = 1.5;
    jessica.first_name_initial = 'j';

    // initialise a second struct person tom (with different values)
    struct person tom;
    tom.shoe_size = 15;
    tom.height = 2.1;
    tom.first_name_initial = 't';

    // print out tom's shoe size 
    printf("%d\n", tom.shoe_size);

    // print out first_name_initial and height
    printf("%c, %lf\n", tom.first_name_initial, tom.height);

    // change the fields of both of the structs
    jessica.shoe_size = 15;

    
    return 0;
}