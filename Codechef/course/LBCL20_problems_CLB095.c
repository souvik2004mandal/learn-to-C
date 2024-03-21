// While Loop
// Loops can execute a block of code as long as a specified condition is reached.
// They are handy because they save time, reduce errors, and they make code more readable.

// The while loop loops through a block of code as long as a specified condition is true:

// while (condition) {
//     // code to be executed
// }
// Example

// int a = 1;
// while (a < 5) {
//     printf("%d\n", a);
//     a++;
// }
// Flow of the loop:

// When the loop starts, a is 1. The condition a < 5 is true, so the loop body executes.
// It prints 1, then increments a to 2.
// The loop checks the condition again. Since a (now 2) is still less than 5, it executes again, printing 2 and incrementing a to 3.
// This process repeats. The loop prints 3, then 4.
// When a becomes 5, the condition a < 5 is no longer true. The loop stops, and control moves to any code that follows the loop.
// So, the output of this loop will be:

// 1
// 2
// 3
// 4
// It prints each number from 1 to 4, then exits as a reaches 5.

// Task
// Write a program which does the following

// Declare a variable a and initialize it to 0
// Use the syntax above to create a loop, output the following to the console
// Print a in separate lines as long as it is less than 7. Don't print any other text.
// Increment a by 1 in each iteration.

//ANS

#include <stdio.h>

int main() {
	int a = 0;
    // write your loop here
    while (a < 7){
        printf("%d\n", a);
        a++;
    }
    return 0;
}