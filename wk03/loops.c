#include <stdio.h>

#define TRUE 1
#define FALSE 0

void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);
void g(void);
void h(void);

int main(void) {
    int run_f = FALSE; 
    int run_g = TRUE;

    printf("a outputs\n");
    a();

    printf("\nb outputs\n");
    b();

    printf("\nc outputs\n");
    c();

    printf("\nd outputs\n");
    d();

    printf("\ne outputs\n");
    e();

    if (run_f) {
        printf("\nf outputs\n");
        f();
    }

    printf("\ng outputs\n");
    g();

    printf("\nh outputs\n");
    h();
    
    return 0;
}

void a(void) {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void b(void) {
    int i = 1;
    while (i < 32) {
        printf("%d\n", i);
        i = i + i;
    }
}

void c(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
}

void d(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}

void e(void) {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}

void f(void) {
    int i;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }

}

void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        i = i + 2;
    }

}

void h(void) {
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}
