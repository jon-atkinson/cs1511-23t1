#include <stdio.h>

int square(int x) {
    x = x * x;
    printf("value inside square function: %d\n", x);
    return x;
}

void square_array(int length, int array[length]);

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    //call square, copying the value of input into `int x`
    input = square(input);

    printf("value after square: %d\n", input);

    return 0;
}

// Squares all elements of an array, modifying the array in the process.
void square_array(int length, int array[length]) {

    for (int i = 0; i < length; i++) {
        array[i] = square(array[i]);
    }
}