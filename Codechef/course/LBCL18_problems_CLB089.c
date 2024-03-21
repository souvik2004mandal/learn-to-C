// Displaying elements
// Write a program which does the following

// Create a string array for the following values "Monday", "Tuesday", "Wednesday", and "Thursday"
// Output the last two elements of the array on separate lines

//ANS

#include <stdio.h>

int main() {
	// your code goes here
    char day[4] [10] = { "Monday", "Tuesday", "Wednesday", "Thursday"};
    printf("%s\n", day[2]);
    printf("%s", day[3]);
    return 0;
}

