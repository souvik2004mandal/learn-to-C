// What are test cases
// In the previous problem - we wrote the program to accept 5 inputs on 5 separate lines.

// What will we do if we expect 100 inputs or test cases?
// What about 100,000 inputs or test cases?
// Task
// Let's solve a simple problem.
// Write a program in the IDE which does the following

// Accepts the count of test cases - t - as an integer input given in the 1st line.
// This is followed by t lines - Each line contains an integer N
// For each test cases, prints out the integer N to console on a separate line (our Input mirror problem)

//ANS

#include <stdio.h>

int main() {
    int t,n;
    int i = 1;
    scanf("%d", &t );
    while ( i <= t) {
        scanf("%d", &n );
        printf("%d \n", n );
        i = i+1;
    }
    return 0;
}