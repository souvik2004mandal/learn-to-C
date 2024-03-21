// Displaying the count of elements
// To get the size of an array, you can use the sizeof() operator:

// For e.g.

// int myNumbers[5] = {10, 20, 30, 40, 50};
// printf("%d", sizeof(myNumbers));

// // Output
// // 20

// // To get actual count
// printf("%d", sizeof(myNumbers) / sizeof(myNumbers[0]));

// // Output
// // 5
// Note

// The result show 20 instead of 5, when the array contains 5 elements.
// It is because the sizeof() operator returns the size of a type in bytes
// int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
// When we do sizeof(myNumbers[0]), we are getting the size of 1st element which is an integer. All other elements will also have the same size.
// Task
// Write a program which does the following

// Create an integer array containing the elements - 10, 20, 30, 40, 50, 60
// Compile and output to the console the accurate count of the number of integer elements in the given array.

//ANS

#include <stdio.h>

int main(void) {
	// your code goes here
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    printf("%d", sizeof(numbers) / sizeof(numbers[0]));
    return 0;
}
