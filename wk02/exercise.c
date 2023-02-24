#include <stdio.h>

void err_message01(void);
void err_message02(void);

int main(void) {

    int a = 1;
    int b = 1;
    printf("Please enter two numbers seperated by spaces: ");
    scanf(" %d %d", &a, &b);

    // if a greater than b then check b equal to 0
    if (a > b) {

        // if b is equal to 0, print second error
        if (b == 0) {
            err_message02();
            return 0;
        }

        // else print a/b and (a*0.1 )/(b*0.1)
        printf("a/b is %d and (a*0.1 )/(b*0.1) is %f\n", a/b, (a*0.1)/(b*0.1));
    }

    // else print first error 
    err_message01();
    return 0;
}

void err_message01(void) {
    printf("first number should be greater than the second number\n");
}

void err_message02(void) {
   printf("the second number should not be equal to 0\n");
}