// Index & printing specific elements of an Array
// You access an array element by referring to the index number inside square brackets [].
// Similar to what we saw in strings, array items are indexed and you can access them by referring to their index number:

// //          0   1    2    - index numbers
// num[ 3 ] = {1, 100, 200};

// printf("%d", num[ 1 ]);

// // Output
// // 100
// Note - Indexing always starts from 0 starting from left to right.

// Task
// Write a program which does the following

// Output the 3rd element from the given array to the console.

//ANS

#include <stdio.h>

int main() {
    
    int num[ 5 ] = {1, 2, 3, 4, 5 };
    // your code goes here
    
    printf("%d", num[2]);
    return 0;
}
