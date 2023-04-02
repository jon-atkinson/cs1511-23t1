#include <stdio.h>

int main(void) {
    char make_array = 'n';
    scanf...
    if (make_array == 'y') 
    int array_normal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *array_malloc = malloc(sizeof(int) * 9);
    array_malloc[0] = 1;
    
    array_malloc = array_normal;
    int *newarray =
    for (int i = 0; i < 10; i++) {
        printf("%d ", array_malloc[i]);
    }
    *(array_malloc + 3 * sizeof(int)) = 8;

    int len;
    scanf("%d", &len);
    int *newArray = malloc(sizeof(int) * len);

    return 0;
}


int *createIntArray() {
    int array[9];
    return malloc(9 * sizeof(int));
}