// Changing the elements of an Array
// To change the value of a specific element in an array, we can use the index number.

// Example

// int powerOfTwo[5] = {2, 4, 8, 16, 32};
// powerOfTwo[1] = 1;

// // The new array will be {2, 1, 8, 16, 32}
// Task
// An array is present in the code, change the last element of this array to be 6. Also, print this last element after changing.

//ANS

#include <stdio.h>

int main() {

    int even_numbers[4] = {0, 2, 4, 5};
    even_numbers[3] = 6;
    
    printf("%d", even_numbers[ 3 ]);
    return 0;
}
