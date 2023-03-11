#include <stdio.h>

#define NUM_CHARACTERS 8

void odd_only() {
    // Create an integer array with at least 5 elements.
    int array[] = {1, 2, 3, 4, 5};

    //  Create a while loop which loops through every element of the array.
    int count = 0;
    while (count < 5) {
      
      //  Write an if statement which adds 1 to each even value. Do this within the while loop.
      if (array[count] % 2 == 0) {
        array[count]++;
      }
      count++;
    }

    //  Write another while loop which goes through the array with a different iterator (i.e. if you used i last time, use j)
    int i = 0;
    while (array[i] < 5) {
      //  Print out the values in the array.
      printf("%d ", array[i]);
      i++;
    }
}

void copy_array() {
    double numbers[] = {4, 704, 12};
    double more_numbers[10] = {0};

    // copying items from the first array to the second
    int i = 0;
    while (i < 3) {
      more_numbers[i] = numbers[i];
      i++;
    }

    // printing all of the elements in the second array
    int j = 0;
    while (j < 10) {
      printf("%.2lf ", more_numbers[j]);
      j++;
    }
}

void largest_character() {
  //  Create a character array with exactly 8 elements.
  char characters[] = {'a', 'b', 'd', 'x', 's', 'u', '3', '&'};

  //  Create a character variable called largest_character, equal to the first character of the array.
  char largest_character = characters[0];

  //  Create a while loop to loop through the character array.
  int i = 0;
  while (i < NUM_CHARACTERS) {
    //  Create an if statement to check if the current character has a higher ascii value than "largest_character"
    if (characters[i] > largest_character) {
      largest_character = characters[i];
    }

    i++;    
  }

  //  Print out the largest character you've found.
  printf("Largest character is: %c\n", largest_character);
}

int main(void) {
  printf("odd_only:\n");
  odd_only();
  printf("\n\ncopy_array:\n");
  copy_array();
  printf("\n\nlargest_character:\n");
  largest_character();
  return 0;
}